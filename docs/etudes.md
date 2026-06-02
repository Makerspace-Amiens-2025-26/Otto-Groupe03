---
layout: default
nav_order: 4
title: Études et choix techniques
---

# Études et choix techniques

**CHÂSSIS**:

Pour aborder efficacement les différentes épreuves des Ottolympiades, on a dû faire des choix stratégiques. Il ne s'agissait pas seulement de donner un look "sport" à notre robot, mais d'utiliser l'univers mécanique de BMW pour optimiser ses performances réelles sur la piste.

Le design de notre OTTO-BMW a été pensé pour répondre aux contraintes physiques des épreuves de force et de vitesse :

* Abaissement du centre de gravité (Pour le Sumo) : Pour éviter que notre robot ne bascule facilement lors des duels sur le ring, nous avons choisi de placer la batterie le plus bas possible dans le corps du robot. De plus, nous avons augmenté le taux de remplissage des pieds afin d'alourdir la base et d'améliorer la stabilité.

* Adhérence des pneumatiques (Pour le Tir à la corde) : Les pieds en plastique PLA lisse d'origine glissaient sur la piste. En étudiant les solutions, nous avons décidé d'ajouter du papier de verre (découpée dans une chambre à air) sous les pieds du robot. Ce choix technique mime l'adhérence des pieds d'une vraie sportive et augmente notre force de traction de manière significative.

* L'Aileron M Performance (Utilité technique) : Au-delà du look, l'aileron arrière a été conçu avec un angle d'inclinaison spécifique pour servir de point d'ancrage solide et centré pour la corde lors de l'épreuve du Tir à la corde, évitant ainsi de désaxer le robot pendant l'effort.

**MOTORISATION** : 

Bien que la carte mère OTTO-MKS (ESP32-C3) soit imposée, nous avons optimisé l'utilisation des périphériques :

* Gestion des Servomoteurs SG90 : Ces moteurs fonctionnent avec des signaux PWM pour contrôler leur angle (0 à 180°). Pour la course de vitesse (Chrono Challenge), nous avons étudié les limites physiques des moteurs afin de trouver la fréquence maximale de balancement des jambes sans faire surchauffer les composants ni faire patiner le robot.

* Le Capteur Ultrason HC-SR04 (Les "Phares") : Intégré esthétiquement comme des optiques de phares BMW, ce capteur calcule la distance en mesurant le temps de retour d'une onde ultrason. Nous l'avons configuré pour deux fonctions clés : stopper le robot à 15 cm d'un mur (Course d'obstacles) et détecter la présence de l'adversaire à moins de 25 cm pour foncer dessus (Mode Sumo).


**LOGICIELS ET STRATEGIES** :

Le comportement du robot a été programmé sous l'IDE Arduino. Nous avons créé une véritable "cartographie moteur" adaptée à chaque épreuve :

* Le Mode "Sport" (Vitesse) : Pour le Chrono Challenge, nous avons développé une fonction de marche avec de grandes amplitudes de pas (angles des servos poussés au maximum) et un timing très court entre chaque pas pour obtenir une vitesse en ligne droite maximale.

* Pour le tir à la corde, nous avons programmé une fonction de marche arrière mais avec de petites amplitudes de pas pour que le robot soit le plus stable possible.

* Pour le Sumo et le Tir à la corde, la vitesse ne sert à rien. Le code a été modifié pour que les servomoteurs avancent millimètre par millimètre en exerçant une pression constante sur le sol, maximisant ainsi le couple et la puissance de poussée.






