<style>
.image-texte {
  display: flex;
  align-items: center;
  gap: 35px;
  margin: 30px 0;
}

.image-texte img {
  width: 330px;
  max-width: 45%;
}

.image-texte .texte {
  flex: 1;
}

.image-texte-small img {
  width: 180px;
  max-width: 30%;
}

.warning-box {
  border-left: 5px solid #f0ad4e;
  background: #fff8e6;
  padding: 12px 18px;
  margin: 20px 0;
}

.info-box {
  border-left: 5px solid #4a90e2;
  background: #eef6ff;
  padding: 12px 18px;
  margin: 20px 0;
}

@media (max-width: 700px) {
  .image-texte {
    flex-direction: column;
    align-items: flex-start;
  }

  .image-texte img {
    max-width: 100%;
    width: 100%;
  }
}
</style>

# Assemblage

Après l’impression des pièces en 3D, l’étape suivante est l’assemblage du robot Otto.

Cette étape permet de monter les servomoteurs, les jambes, les pieds, la tête, la carte électronique, le capteur ultrason et la batterie.

<div class="info-box">
  Avant de commencer l’assemblage, il est conseillé d’avoir toutes les pièces imprimées, les vis et les composants électroniques devant soi.
</div>

## Objectif

<div class="image-texte">
  <img src="https://makerspace-amiens.fr/otto-mks/docs/tutoriels/09-assemble-otto/OttoIkea.png" alt="Schéma général du robot Otto">

  <div class="texte">
    <p>
      L’objectif de cette partie est d’obtenir un robot entièrement assemblé,
      prêt à être programmé et testé.
    </p>

```
<p>
  Un bon assemblage est important car un mauvais positionnement des servomoteurs
  peut empêcher le robot de marcher correctement.
</p>

<p>
  Il faut donc prendre son temps, bien vérifier le sens des pièces et ne pas forcer
  sur les servomoteurs.
</p>
```

  </div>
</div>

## Matériel

<div class="image-texte">
  <img src="https://makerspace-amiens.fr/otto-mks/docs/tutoriels/09-assemble-otto/BOM.png" alt="Matériel nécessaire pour assembler Otto">

  <div class="texte">
    <p>
      Pour commencer, vérifiez que vous disposez de l’ensemble du matériel
      et des pièces imprimées.
    </p>

```
<p>Il faut notamment :</p>

<ul>
  <li>les pièces imprimées en 3D ;</li>
  <li>la tête du robot ;</li>
  <li>le corps du robot ;</li>
  <li>les deux jambes ;</li>
  <li>les deux pieds ;</li>
  <li>4 servomoteurs SG90 ;</li>
  <li>les palonniers des servomoteurs ;</li>
  <li>le capteur ultrason HC-SR04 ;</li>
  <li>la carte électronique Otto-MKS ;</li>
  <li>une batterie 9V ;</li>
  <li>une cosse de batterie ;</li>
  <li>un câble USB ;</li>
  <li>un tournevis ;</li>
  <li>les vis nécessaires.</li>
</ul>
```

  </div>
</div>

## Précautions avant l’assemblage

<div class="warning-box">
  <strong>Attention :</strong> les servomoteurs sont fragiles. Il ne faut pas forcer leur rotation à la main, car cela peut abîmer les engrenages internes.
</div>

<p>
Avant de commencer, il faut prendre son temps et vérifier chaque étape.
</p>

<p>
Il faut aussi faire attention au type de vis utilisé. Une vis trop longue ou mal placée peut endommager une pièce imprimée en 3D ou un servomoteur.
</p>

<p>
Les servomoteurs doivent être positionnés à 90° avant d’installer les jambes et les pieds. Cette position correspond à la position neutre du robot.
</p>

## Étapes d’assemblage

## Étape 1 - Assemblage du corps

<p>
Insérez les servomoteurs dans la pièce <code>Body</code>, aux emplacements prévus.
</p>

<p>
Les servomoteurs doivent être placés correctement et bien alignés.
</p>

<p>
Il faut vérifier que les câbles ressortent dans le bon sens afin de faciliter le câblage à la fin du montage.
</p>

## Étape 2 - Vissage des servomoteurs du corps

<p>
Vissez les servomoteurs dans le corps du robot.
</p>

<div class="warning-box">
  <strong>Attention :</strong> vérifiez le type de vis avant de visser.
</div>

<p>
Il ne faut pas trop serrer afin de ne pas abîmer le plastique imprimé en 3D.
</p>

<p>
Les servomoteurs doivent être maintenus fermement, mais sans forcer.
</p>

## Étape 3 - Assemblage des palonniers des jambes

<p>
Découpez deux palonniers comme indiqué dans le tutoriel.
</p>

<p>
Insérez ensuite les palonniers dans les pièces <code>Leg</code>.
</p>

<p>
Les palonniers doivent être enfoncés jusqu’au fond de leur emplacement.
</p>

<p>
Cette étape permet de relier les jambes aux axes des servomoteurs.
</p>

## Étape 4 - Positionnement des servomoteurs à 90°

<div class="warning-box">
  <strong>Attention :</strong> cette étape est très importante. Si les servomoteurs ne sont pas centrés correctement, le robot peut marcher de travers.
</div>

<p>
Branchez les servomoteurs sur la carte électronique.
</p>

<p>
Lancez le programme Arduino permettant de placer les servomoteurs à 90°.
</p>

<p>
Cette position correspond à la position neutre des jambes.
</p>

<p>
Une fois les servomoteurs positionnés, il ne faut plus les tourner à la main.
</p>

## Étape 5 - Assemblage des jambes

<p>
Insérez les jambes sur les axes des servomoteurs dans la bonne position.
</p>

<p>
Les jambes doivent être symétriques et orientées correctement.
</p>

<p>
Après l’installation, vérifiez que les butées sont bien placées autour de la position neutre.
</p>

<p>
Cela permet aux jambes de bouger correctement pendant la marche du robot.
</p>

## Étape 6 - Vissage des jambes

<p>
Vissez les jambes sur les axes des servomoteurs.
</p>

<div class="warning-box">
  <strong>Attention :</strong> vérifiez le type de vis avant de visser.
</div>

<p>
Les jambes doivent être bien fixées, mais il ne faut pas forcer sur les servomoteurs.
</p>

<p>
Si une jambe semble mal alignée, il vaut mieux la retirer et la replacer plutôt que de forcer.
</p>

## Étape 7 - Assemblage des palonniers des pieds

<p>
Insérez les palonniers dans les pièces <code>Left_Foot</code> et <code>Right_Foot</code>.
</p>

<p>
Les palonniers doivent être enfoncés jusqu’à la butée.
</p>

<p>
Ils permettront ensuite de fixer les pieds aux servomoteurs.
</p>

## Étape 8 - Vissage des palonniers des pieds

<p>
Vissez fermement les palonniers dans les pieds.
</p>

<div class="warning-box">
  <strong>Attention :</strong> vérifiez le type de vis utilisé.
</div>

<p>
Cette étape permet de créer une liaison solide entre les pieds et les servomoteurs.
</p>

<p>
Les pieds doivent rester bien droits pour que le robot soit stable.
</p>

## Étape 9 - Positionnement des servomoteurs des pieds

<div class="warning-box">
  <strong>Attention :</strong> comme pour les jambes, les servomoteurs des pieds doivent être positionnés à 90° avant le montage.
</div>

<p>
Branchez les deux servomoteurs des pieds sur la carte électronique.
</p>

<p>
Lancez à nouveau le programme de positionnement à 90°.
</p>

<p>
Une fois les servomoteurs centrés, ne les tournez plus à la main.
</p>

## Étape 10 - Assemblage des servomoteurs des pieds

<p>
Insérez les servomoteurs dans les pièces <code>Foot</code> en respectant leur orientation.
</p>

<p>
Vérifiez que les butées sont bien à 90° de chaque côté de la position neutre.
</p>

<p>
Les câbles doivent être orientés correctement pour pouvoir remonter dans le corps du robot.
</p>

## Étape 11 - Vissage des servomoteurs des pieds

<p>
Vissez les axes des servomoteurs des pieds.
</p>

<div class="warning-box">
  <strong>Attention :</strong> vérifiez le type de vis avant de visser.
</div>

<p>
Il faut aussi faire attention à ne pas tirer sur les câbles des servomoteurs.
</p>

## Étape 12 - Assemblage des pieds avec les jambes

<p>
Insérez les pieds dans les emplacements prévus sur les jambes.
</p>

<p>
Faites passer les fils des servomoteurs dans les trous de la pièce <code>Body</code>.
</p>

<p>
Les câbles doivent pouvoir remonter proprement à l’intérieur du robot.
</p>

<p>
À cette étape, le robot commence à prendre sa forme finale.
</p>

## Étape 13 - Vissage final des pieds

<p>
Vissez la deuxième vis des servomoteurs.
</p>

<div class="warning-box">
  <strong>Attention :</strong> vérifiez le type de vis avant de visser.
</div>

<p>
Les pieds doivent être bien fixés aux jambes.
</p>

<p>
Vérifiez que les pieds sont alignés et que le robot peut tenir debout.
</p>

## Étape 14 - Assemblage du capteur ultrason

<p>
Glissez le capteur ultrason HC-SR04 dans la pièce <code>Head</code>.
</p>

<p>
Il faut respecter le sens indiqué pour que les deux capteurs soient visibles à l’avant du robot.
</p>

<div class="warning-box">
  <strong>Attention :</strong> les grilles avant du capteur ultrason sont fragiles. Il faut éviter d’appuyer dessus.
</div>

<p>
Le capteur ultrason permettra au robot de détecter les obstacles devant lui.
</p>

## Étape bonus - Pause canard

<div class="image-texte image-texte-small">
  <img src="https://makerspace-amiens.fr/otto-mks/docs/tutoriels/09-assemble-otto/duck.png" alt="Canard jaune">

  <div class="texte">
    <p>
      Prenez une petite pause pour observer le canard jaune du kit.
    </p>

```
<p>
  Si vous avez rencontré des problèmes depuis le début du montage,
  il saura vous écouter avec compassion.
</p>
```

  </div>
</div>

## Étape 15 - Préparation de la carte électronique

<p>
Dévissez la rondelle et l’écrou du bouton de la carte électronique.
</p>

<p>
Conservez-les, car ils seront réutilisés pour fixer la carte dans la tête du robot.
</p>

<p>
Cette étape permet de préparer l’installation de la carte dans la pièce <code>Head</code>.
</p>

## Étape 16 - Installation de la carte électronique

<p>
Insérez délicatement la carte électronique dans la pièce <code>Head</code>.
</p>

<p>
Vérifiez que les broches du capteur ultrason s’insèrent correctement dans le connecteur de la carte.
</p>

<p>
Le bouton doit être enfoncé jusqu’à la butée.
</p>

<div class="warning-box">
  <strong>Attention :</strong> il faut manipuler la carte avec précaution pour ne pas plier les broches du capteur ultrason.
</div>

## Étape 17 - Fixation de la tête

<p>
Remettez la rondelle, puis revissez l’écrou du bouton.
</p>

<div class="warning-box">
  <strong>Attention :</strong> l’ergot de la rondelle doit s’insérer dans l’un des trous prévus.
</div>

<p>
Cela permet de maintenir correctement la carte électronique dans la tête.
</p>

<p>
Vérifiez que le bouton reste accessible depuis l’extérieur.
</p>

## Étape 18 - Installation de la batterie

<p>
Fixez la cosse 9V sur la batterie.
</p>

<div class="warning-box">
  <strong>Attention :</strong> la carte ne doit surtout pas être branchée à l’envers, sinon elle peut être endommagée.
</div>

<p>
Insérez ensuite la batterie dans son emplacement, avec les câbles orientés vers le haut.
</p>

<p>
La batterie doit être bien placée pour ne pas gêner la fermeture de la tête.
</p>

## Étape 19 - Câblage des servomoteurs

<p>
Branchez les servomoteurs sur la carte électronique en respectant l’ordre prévu.
</p>

<p>
Il faut également vérifier le sens des connecteurs :
</p>

<ul>
  <li>fil marron : masse ;</li>
  <li>fil rouge : +5V ;</li>
  <li>fil jaune : signal.</li>
</ul>

<div class="warning-box">
  <strong>Attention :</strong> un mauvais branchement peut empêcher le robot de fonctionner correctement.
</div>

<p>
Avant de refermer le robot, vérifiez que chaque câble est branché au bon endroit.
</p>

## Étape 20 - Rangement des câbles

<p>
Utilisez une bande de velcro pour organiser les câbles proprement à l’intérieur du robot.
</p>

<p>
Les câbles ne doivent pas gêner la fermeture de la tête.
</p>

<p>
Ils ne doivent pas non plus bloquer le mouvement des servomoteurs.
</p>

## Étape 21 - Assemblage final

<p>
Refermez la tête sur le corps.
</p>

<p>
Appuyez légèrement sur les côtés pour faciliter l’emboîtement.
</p>

<div class="warning-box">
  <strong>Attention :</strong> vérifiez qu’aucun câble n’est coincé entre la tête et le corps.
</div>

<p>
Une fois la tête fermée, le robot Otto est entièrement assemblé.
</p>

## Vérifications à effectuer

<p>
Avant de tester le robot, il faut vérifier que :
</p>

<ul>
  <li>les servomoteurs sont bien vissés ;</li>
  <li>les jambes sont dans le bon sens ;</li>
  <li>les pieds sont bien alignés ;</li>
  <li>les câbles ne sont pas coincés ;</li>
  <li>les connecteurs sont branchés dans le bon sens ;</li>
  <li>le capteur ultrason est bien placé ;</li>
  <li>la batterie est bien connectée ;</li>
  <li>la tête se ferme correctement ;</li>
  <li>aucune pièce ne bloque le mouvement.</li>
</ul>

## Problèmes communs et solutions

## Le robot marche de travers

<p>
Cela peut venir d’un mauvais centrage des servomoteurs.
</p>

<p>
Il faut relancer le programme de positionnement à 90°, puis replacer les jambes ou les pieds correctement.
</p>

<p>
Il faut aussi vérifier que les trims dans le programme correspondent bien à la position réelle des servomoteurs.
</p>

## Les pièces ne s’emboîtent pas correctement

<p>
Les pièces imprimées en 3D peuvent parfois avoir de légères différences de dimensions.
</p>

<p>
Solutions possibles :
</p>

<ul>
  <li>vérifier l’orientation des pièces ;</li>
  <li>poncer légèrement les zones qui bloquent ;</li>
  <li>vérifier les dimensions dans le slicer ;</li>
  <li>modifier légèrement l’échelle des pièces dans le slicer.</li>
</ul>

## Un servomoteur ne bouge pas

<p>
Il faut vérifier :
</p>

<ul>
  <li>le branchement du servomoteur ;</li>
  <li>le sens du connecteur ;</li>
  <li>le câble ;</li>
  <li>le programme Arduino ;</li>
  <li>l’alimentation de la carte.</li>
</ul>

## La tête ne ferme pas

<p>
Cela arrive souvent si les câbles sont mal rangés.
</p>

<p>
Il faut replacer les câbles avec le velcro et vérifier qu’ils ne sont pas coincés.
</p>

<p>
Il faut aussi vérifier que la batterie est correctement positionnée.
</p>

## Le robot ne s’allume pas

<p>
Il faut vérifier :
</p>

<ul>
  <li>la batterie ;</li>
  <li>la cosse 9V ;</li>
  <li>le connecteur d’alimentation ;</li>
  <li>le sens de branchement ;</li>
  <li>la carte électronique.</li>
</ul>

## Les servomoteurs font du bruit

<p>
Un léger bruit peut être normal, mais si un servomoteur force beaucoup, il faut vérifier que la pièce n’est pas bloquée.
</p>

<p>
Il faut aussi vérifier que les jambes et les pieds sont bien centrés.
</p>

## Le robot tombe facilement

<p>
Cela peut venir d’un mauvais alignement des pieds ou d’un mauvais centrage des servomoteurs.
</p>

<p>
Il faut vérifier la position des pieds, le serrage des vis et les valeurs de correction dans le programme.
</p>

## À vous de jouer !

<div class="image-texte">
  <img src="https://makerspace-amiens.fr/otto-mks/docs/tutoriels/09-assemble-otto/OttoIkea.png" alt="Robot Otto terminé">

  <div class="texte">
    <p>
      Félicitations, votre robot Otto est maintenant assemblé.
    </p>

```
<p>
  Il peut maintenant être programmé, testé et amélioré.
</p>

<p>
  L’assemblage doit être réalisé avec soin, car le positionnement des servomoteurs
  et le rangement des câbles influencent directement le bon fonctionnement du robot.
</p>
```

  </div>
</div>
