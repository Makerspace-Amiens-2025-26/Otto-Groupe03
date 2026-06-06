// RemoteXY select connection mode and include library
#define REMOTEXY__DEBUGLOG  
#define REMOTEXY_MODE__ESP32CORE_BLE

// RemoteXY connection settings
#include <BLEDevice.h>
#include <ESP32Servo.h>

// RemoteXY connection settings
#define REMOTEXY_BLUETOOTH_NAME "BMW-BOT"
#define REMOTEXY_ACCESS_PASSWORD "1234"

#include <RemoteXY.h>

#pragma pack(push, 1)  
uint8_t const PROGMEM RemoteXY_CONF_PROGMEM[] =   // 80 bytes V19
  { 255,5,0,0,0,73,0,19,0,0,0,77,105,110,105,116,116,111,0,6,
  2,106,200,200,84,1,1,4,0,3,30,7,16,44,37,24,38,7,134,2,
  26,5,32,60,60,60,121,15,57,57,32,2,26,31,1,6,120,24,24,61,
  41,24,24,0,2,31,0,1,48,131,24,24,28,41,24,24,0,2,31,0 };
 
// this structure defines all the variables and events of your control interface
struct {

    // input variables
  uint8_t selectorSwitch_01;
  int8_t joystick_01_x;
  int8_t joystick_01_y; 
  uint8_t button_01; 
  uint8_t button_02;  

  uint8_t connect_flag;

} RemoteXY;  
#pragma pack(pop)

#define PIN_JAMBE_G D7
#define PIN_PIED_G  D8
#define PIN_JAMBE_D D10
#define PIN_PIED_D  D9
#define BUZZER_PIN  D0 

int vitesseMouvement = 3; 
int centre = 90;

int trimJG = -1, trimJD = -2, trimPG = -3, trimPD = 0;

Servo jambeG, jambeD, piedG, piedD;

// --- DÉFINITIONS MUSIQUE (MARCHE IMPÉRIALE) ---
#define NOTE_A3 220
#define NOTE_F3 175
#define NOTE_C4 262
#define NOTE_A4 440
#define NOTE_F4 349
#define NOTE_C5 523
#define REST    0

int imperialMarch[][2] = {
  {NOTE_A3, 500}, {NOTE_A3, 500}, {NOTE_A3, 500}, {NOTE_F3, 350}, {NOTE_C4, 150}, {NOTE_A3, 500},
  {NOTE_F3, 350}, {NOTE_C4, 150}, {NOTE_A3, 650}, {REST, 500},
  {NOTE_A4, 500}, {NOTE_A4, 500}, {NOTE_A4, 500}, {NOTE_F4, 349}, {NOTE_C5, 150}, {NOTE_A4, 500},
  {NOTE_F4, 349}, {NOTE_C5, 150}, {NOTE_A4, 650}
};

void playMusic() {
  int totalNotes = sizeof(imperialMarch) / sizeof(imperialMarch[0]);
  for (int i = 0; i < totalNotes; i++) {
    int freq = imperialMarch[i][0];
    int duration = imperialMarch[i][1];
    if (freq == REST) {
      noTone(BUZZER_PIN);
    } else {
      tone(BUZZER_PIN, freq, duration);
    }
    RemoteXYEngine.delay(duration * 1.2);
    noTone(BUZZER_PIN);
  }
}


void klaxon() {
  // Un double coup de klaxon strident (aigu)
  tone(BUZZER_PIN, 880, 150);
  delay(200);
  noTone(BUZZER_PIN);
  
  tone(BUZZER_PIN, 880, 150);
  delay(150);
  noTone(BUZZER_PIN);
}

// --- FONCTION BIP MARCHE ARRIÈRE (NON-BLOQUANTE) ---
unsigned long precedentMillisBip = 0;
bool etatBip = false;

void gererBipRecul(bool actif) {
  if (!actif) {
    noTone(BUZZER_PIN);
    etatBip = false;
    return;
  }

  unsigned long actuelMillis = millis();
  // Alterne toutes les 350 ms pour faire "BIP... (silence)... BIP..."
  if (actuelMillis - precedentMillisBip >= 350) {
    precedentMillisBip = actuelMillis;
    etatBip = !etatBip;
    
    if (etatBip) {
      tone(BUZZER_PIN, 1000); // Bip aigu à 1000 Hz
    } else {
      noTone(BUZZER_PIN);
    }
  }
}

void homePosition() {
  jambeG.write(centre + trimJG);
  jambeD.write(centre + trimJD);
  piedG.write(centre + trimPG);
  piedD.write(centre + trimPD);
}

void updateSpeedAndCheck() {
  RemoteXYEngine.handler(); 
  int maxInput = max(abs(RemoteXY.joystick_01_y), abs(RemoteXY.joystick_01_x));
  vitesseMouvement = map(maxInput, 0, 100, 10, 2); 

  // On vérifie le klaxon même pendant qu'Otto marche !
  if (RemoteXY.button_01 == 1) {
    klaxon();
  }
}

void moveSlow(Servo &s, int target) {
  int currentPos = s.read();
  int direction = (currentPos < target) ? 1 : -1;

  for (int i = currentPos; i != target + direction; i += direction) {
    updateSpeedAndCheck();
    s.write(i);
    RemoteXYEngine.delay(vitesseMouvement);
  }
}

// Marche Avant
void walk(int angleGauche, int angleDroite) {
  gererBipRecul(false);

  moveSlow(piedG, centre - 23);
  moveSlow(piedD, centre - 45);

  moveSlow(jambeG, centre + angleGauche);
  moveSlow(piedG, centre + trimPG);
  moveSlow(piedD, centre + trimPD);
  moveSlow(jambeG, centre + trimJG);

  moveSlow(piedD, centre + 20);
  moveSlow(piedG, centre + 40);
  moveSlow(jambeD, centre - angleDroite);

  moveSlow(piedD, centre + trimPD);
  moveSlow(piedG, centre + trimPG);
  moveSlow(jambeD, centre + trimJD);
}

// Marche Arrière
void backward(int angleGauche, int angleDroite) {
  gererBipRecul(true);

  moveSlow(piedD, centre + 42);
  moveSlow(piedG, centre + 20);

  gererBipRecul(true);
  moveSlow(jambeD, centre + angleDroite);
  moveSlow(piedD, centre + trimPD);
  moveSlow(piedG, centre + trimPG);
  moveSlow(jambeD, centre + trimJD);

  gererBipRecul(true);
  moveSlow(piedD, centre - 42);
  moveSlow(piedG, centre - 20);

  gererBipRecul(true);
  moveSlow(jambeG, centre - angleGauche);
  moveSlow(piedD, centre + trimPD);
  moveSlow(piedG, centre + trimPG);
  moveSlow(jambeG, centre + trimJG);
}

// Pas chassé à DROITE
void sidestepRight() {
  gererBipRecul(false);

  moveSlow(piedG, centre + trimPG - 25);
  moveSlow(piedD, centre + trimPD - 25);
  moveSlow(jambeD, centre + trimJD - 30);

  moveSlow(piedG, centre + trimPG);
  moveSlow(piedD, centre + trimPD);

  moveSlow(piedG, centre + trimPG + 25);
  moveSlow(piedD, centre + trimPD + 25);
  moveSlow(jambeG, centre + trimJG - 30);

  moveSlow(jambeG, centre + trimJG);
  moveSlow(jambeD, centre + trimJD);
  moveSlow(piedG, centre + trimPG);
  moveSlow(piedD, centre + trimPD);
}

// Pas chassé à GAUCHE
void sidestepLeft() {
  gererBipRecul(false);

  moveSlow(piedG, centre + trimPG + 25);
  moveSlow(piedD, centre + trimPD + 25);
  moveSlow(jambeG, centre + trimJG + 30);

  moveSlow(piedG, centre + trimPG);
  moveSlow(piedD, centre + trimPD);

  moveSlow(piedG, centre + trimPG - 25);
  moveSlow(piedD, centre + trimPD - 25);
  moveSlow(jambeD, centre + trimJD + 30);

  moveSlow(jambeG, centre + trimJG);
  moveSlow(jambeD, centre + trimJD);
  moveSlow(piedG, centre + trimPG);
  moveSlow(piedD, centre + trimPD);
}
void setup() {
  RemoteXY_Init();
  Serial.begin(115200);
  pinMode(BUZZER_PIN, OUTPUT);

  jambeG.attach(PIN_JAMBE_G);
  piedG.attach(PIN_PIED_G);
  jambeD.attach(PIN_JAMBE_D);
  piedD.attach(PIN_PIED_D);
  
  homePosition();


  playMusic(); 
}

void loop() { 
  updateSpeedAndCheck();   

  int correctionLigneDroite = 10; 
  int angleJG = 55; 
  int angleJD = 55 - correctionLigneDroite; 

  // Actionneur principal
  if (abs(RemoteXY.joystick_01_y) >= abs(RemoteXY.joystick_01_x) && abs(RemoteXY.joystick_01_y) > 15) {
    if (RemoteXY.joystick_01_x > 15) { 
      angleJG = map(RemoteXY.joystick_01_x, 15, 100, 55, 15);
    } 
    else if (RemoteXY.joystick_01_x < -15) { 
      angleJD = map(RemoteXY.joystick_01_x, -15, -100, (55 - correctionLigneDroite), 15);
    }

    if (RemoteXY.joystick_01_y > 15) {
      walk(angleJG, angleJD);
    } 
    else {
      backward(angleJG, angleJD);
    }
  } 
  else if (abs(RemoteXY.joystick_01_x) > 40) {
    if (RemoteXY.joystick_01_x > 40) {
      sidestepRight();
    } else {
      sidestepLeft();
    }
  } 
  else {
    gererBipRecul(false); // Coupe le son si on s'arrête
    homePosition();
  }
}