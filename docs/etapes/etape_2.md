---
layout: default
title: Assemblage
parent: Etapes de fabrication
nav_order: 2
---

# Assemblage

Après l’impression des pièces en 3D et la préparation du matériel, l’étape suivante est l’assemblage du robot Otto-MKS.

Cette étape permet de monter les différentes parties du robot : le corps, les jambes, les pieds, la tête, les servomoteurs, le capteur ultrason, la carte électronique et la batterie.

![Schéma général du robot Otto](https://makerspace-amiens.fr/otto-mks/docs/tutoriels/09-assemble-otto/OttoIkea.png)

## Objectif

L’objectif de cette étape est d’obtenir un robot Otto entièrement assemblé, prêt à être programmé et testé.

Un bon assemblage est très important, car un mauvais positionnement des servomoteurs peut empêcher le robot de marcher correctement.

Il faut donc prendre son temps, vérifier régulièrement le montage et faire attention au sens des pièces.

## Matériel

Pour commencer, vérifiez que vous disposez de l’ensemble du matériel et des pièces imprimées.

![Matériel nécessaire](https://makerspace-amiens.fr/otto-mks/docs/tutoriels/09-assemble-otto/BOM.png)

Il faut notamment :

- les pièces imprimées en 3D ;
- la tête du robot ;
- le corps du robot ;
- les deux jambes ;
- les deux pieds ;
- 4 servomoteurs SG90 ;
- les palonniers des servomoteurs ;
- le capteur ultrason HC-SR04 ;
- la carte électronique Otto-MKS ;
- une batterie 9V ;
- une cosse de batterie ;
- un câble USB ;
- un tournevis ;
- les vis nécessaires.

## Précautions avant l’assemblage

Avant d’assembler le robot, il faut avoir suivi les étapes précédentes du projet, notamment l’impression des pièces et le test des servomoteurs.

Les servomoteurs sont fragiles. Il ne faut pas forcer leur rotation à la main, car cela peut abîmer les engrenages internes.

Il faut aussi vérifier le type de vis utilisé à chaque étape. Une vis trop longue ou mal placée peut endommager une pièce imprimée en 3D ou un servomoteur.

Les servomoteurs doivent être placés à 90° avant de fixer les jambes et les pieds. Cette position correspond à la position neutre du robot.

![Schéma d’assemblage Otto](https://makerspace-amiens.fr/otto-mks/docs/tutoriels/09-assemble-otto/OttoIkea.png)

## Étapes d'Assemblage

### 1. Organisation

Organisez tous les composants préparés.

Avant de commencer, il faut vérifier que toutes les pièces sont présentes et que les composants électroniques sont prêts à être utilisés.

![Liste du matériel](https://makerspace-amiens.fr/otto-mks/docs/tutoriels/09-assemble-otto/BOM.png)

### 2. Assemblage du corps

Insérez les servomoteurs dans la pièce `Body`, aux emplacements prévus.

Les servomoteurs doivent être bien alignés et placés dans le bon sens afin de faciliter le câblage à la fin du montage.

![Assemblage du corps](https://makerspace-amiens.fr/otto-mks/docs/tutoriels/09-assemble-otto/OttoIkea.png)

### 3. Vissage des servomoteurs du corps

Vissez les servomoteurs dans le corps du robot.

Il faut vérifier le type de vis avant de visser.

Ne serrez pas trop fort pour éviter d’abîmer le plastique imprimé en 3D.

### 4. Assemblage des palonniers des jambes

Découpez deux palonniers comme indiqué dans le tutoriel.

Insérez ensuite les palonniers dans les pièces `Leg`.

Les palonniers doivent être enfoncés jusqu’au fond des emplacements prévus.

![Palonniers et servomoteurs](https://makerspace-amiens.fr/otto-mks/docs/tutoriels/09-assemble-otto/BOM.png)

### 5. Positionnement des servomoteurs à 90°

Avant d’assembler les jambes, il faut positionner les servomoteurs à 90°.

Pour cela, branchez les servomoteurs sur la carte électronique puis utilisez le programme Arduino prévu pour les placer en position neutre.

Cette étape est importante, car si les servomoteurs ne sont pas bien centrés, le robot risque de marcher de travers.

### 6. Assemblage des jambes

Insérez les jambes sur les axes des servomoteurs.

Les jambes doivent être placées dans la bonne position et être symétriques.

Après l’installation, vérifiez que les butées sont bien placées autour de la position neutre.

![Assemblage des jambes](https://makerspace-amiens.fr/otto-mks/docs/tutoriels/09-assemble-otto/OttoIkea.png)

### 7. Vissage des jambes

Vissez les jambes sur les axes des servomoteurs.

Il faut vérifier le type de vis avant de visser.

Les jambes doivent être bien fixées, mais il ne faut pas forcer sur les servomoteurs.

### 8. Assemblage des palonniers des pieds

Insérez les palonniers dans les pièces `Left_Foot` et `Right_Foot`.

Les palonniers doivent être enfoncés jusqu’à la butée.

### 9. Vissage des palonniers des pieds

Vissez fermement les palonniers dans les pieds.

Il faut vérifier le type de vis utilisé.

Cette étape permet de créer une liaison solide entre les pieds et les servomoteurs.

![Assemblage des pieds](https://makerspace-amiens.fr/otto-mks/docs/tutoriels/09-assemble-otto/OttoIkea.png)

### 10. Assemblage des servomoteurs des pieds

Comme pour les jambes, branchez les deux servomoteurs des pieds sur la carte électronique.

Lancez le programme de positionnement à 90°.

Insérez ensuite les servomoteurs dans les pièces `Foot` dans la position indiquée.

Vérifiez que les butées se trouvent bien à 90° de chaque côté de la position neutre.

### 11. Vissage des servomoteurs des pieds

Vissez les axes des servomoteurs des pieds.

Il faut vérifier le type de vis avant de visser.

Faites attention à ne pas tirer sur les câbles des servomoteurs.

### 12. Assemblage des pieds

Insérez les pieds dans les emplacements prévus des pièces `Leg`.

Faites passer les fils des servomoteurs dans les trous de la pièce `Body`.

Les câbles doivent remonter proprement dans le corps du robot.

![Pieds du robot Otto](https://makerspace-amiens.fr/otto-mks/docs/tutoriels/09-assemble-otto/OttoIkea.png)

### 13. Vissage final des pieds

Vissez la deuxième vis des servomoteurs.

Les pieds doivent être bien fixés aux jambes.

Vérifiez que le robot peut tenir debout et que les pieds sont correctement alignés.

### 14. Assemblage du capteur ultrason

Glissez le capteur ultrason HC-SR04 dans la pièce `Head`.

Il faut respecter le sens indiqué pour que les deux capteurs soient visibles à l’avant du robot.

Les grilles avant du capteur ultrason sont fragiles. Il faut éviter d’appuyer dessus.

![Capteur ultrason et électronique](https://makerspace-amiens.fr/otto-mks/docs/tutoriels/09-assemble-otto/BOM.png)

### 15. Préparation de la carte électronique

Dévissez la rondelle et l’écrou du bouton de la carte électronique.

Conservez-les, car ils seront réutilisés pour fixer la carte dans la tête du robot.

### 16. Installation de la carte électronique

Insérez délicatement la carte électronique dans la pièce `Head`.

Vérifiez que les broches du capteur ultrason s’insèrent correctement dans le connecteur de la carte.

Le bouton doit être enfoncé jusqu’à la butée.

### 17. Fixation de la tête

Remettez la rondelle, puis revissez l’écrou du bouton.

L’ergot de la rondelle doit s’insérer dans l’un des trous prévus.

Cela permet de maintenir correctement la carte électronique dans la tête.

### 18. Installation de la batterie

Fixez la cosse 9V sur la batterie.

La carte ne doit surtout pas être branchée à l’envers, sinon elle peut être endommagée.

Insérez ensuite la batterie dans son emplacement, avec les câbles orientés vers le haut.

![Batterie et composants](https://makerspace-amiens.fr/otto-mks/docs/tutoriels/09-assemble-otto/BOM.png)

### 19. Câblage des servomoteurs

Branchez les servomoteurs sur la carte électronique en respectant l’ordre prévu.

Il faut également vérifier le sens des connecteurs :

- fil marron : masse ;
- fil rouge : +5V ;
- fil jaune : signal.

Un mauvais branchement peut empêcher le robot de fonctionner correctement.

### 20. Rangement des câbles

Utilisez une bande de velcro pour organiser les câbles proprement à l’intérieur du robot.

Les câbles ne doivent pas gêner la fermeture de la tête.

Ils ne doivent pas non plus bloquer le mouvement des servomoteurs.

### 21. Assemblage final

Refermez la tête sur le corps.

Appuyez légèrement sur les côtés pour faciliter l’emboîtement.

Vérifiez qu’aucun câble n’est coincé entre la tête et le corps.

Une fois la tête fermée, le robot Otto est entièrement assemblé.

![Robot Otto terminé](https://makerspace-amiens.fr/otto-mks/docs/tutoriels/09-assemble-otto/OttoIkea.png)

## Vérifications à Effectuer

Avant de tester le robot, il faut vérifier que :

- les servomoteurs sont bien vissés ;
- les jambes sont dans le bon sens ;
- les pieds sont bien alignés ;
- les câbles ne sont pas coincés ;
- les connecteurs sont branchés dans le bon sens ;
- le capteur ultrason est bien placé ;
- la batterie est bien connectée ;
- la tête se ferme correctement ;
- aucune pièce ne bloque le mouvement.

![Vérification du robot Otto](https://makerspace-amiens.fr/otto-mks/docs/tutoriels/09-assemble-otto/OttoIkea.png)

## Problèmes Communs et Solutions

### Le robot marche de travers

Cela peut venir d’un mauvais centrage des servomoteurs.

Il faut relancer le programme de positionnement à 90°, puis replacer les jambes ou les pieds correctement.

Il faut aussi vérifier que les trims dans le programme correspondent bien à la position réelle des servomoteurs.

### Les pièces ne s’emboîtent pas correctement

Les pièces imprimées en 3D peuvent parfois avoir de légères différences de dimensions.

Solutions possibles :

- vérifier l’orientation des pièces ;
- poncer légèrement les zones qui bloquent ;
- vérifier les dimensions dans le slicer ;
- modifier légèrement l’échelle des pièces dans le slicer directement.

### Un servomoteur ne bouge pas

Il faut vérifier :

- le branchement du servomoteur ;
- le sens du connecteur ;
- le câble ;
- le programme Arduino ;
- l’alimentation de la carte.

### La tête ne ferme pas

Cela arrive souvent si les câbles sont mal rangés.

Il faut replacer les câbles avec le velcro et vérifier qu’ils ne sont pas coincés.

Il faut aussi vérifier que la batterie est correctement positionnée.

### Le robot ne s’allume pas

Il faut vérifier :

- la batterie ;
- la cosse 9V ;
- le connecteur d’alimentation ;
- le sens de branchement ;
- la carte électronique.

### Les servomoteurs font du bruit

Un léger bruit peut être normal, mais si un servomoteur force beaucoup, il faut vérifier que la pièce n’est pas bloquée.

Il faut aussi vérifier que les jambes et les pieds sont bien centrés.

### Le robot tombe facilement

Cela peut venir d’un mauvais alignement des pieds ou d’un mauvais centrage des servomoteurs.

Il faut vérifier la position des pieds, le serrage des vis et les valeurs de correction dans le programme.

## Pause canard

Prenez une petite pause pour observer le canard jaune du kit.

Si vous avez rencontré des problèmes pendant le montage, il saura vous écouter avec compassion.

![Canard jaune](https://makerspace-amiens.fr/otto-mks/docs/tutoriels/09-assemble-otto/duck.png)

## Conclusion

Une fois l’assemblage terminé, le robot Otto est prêt à être programmé, testé et amélioré.

Cette étape doit être réalisée avec soin, car le positionnement des servomoteurs et le rangement des câbles influencent directement le bon fonctionnement du robot.
