# Assemblage

Après l’impression des pièces en 3D, l’étape suivante est l’assemblage du robot Otto.  
Cette étape permet de monter les servomoteurs, les jambes, les pieds, la tête, la carte électronique, le capteur ultrason et la batterie.

![Schéma général du robot Otto](https://makerspace-amiens.fr/otto-mks/docs/tutoriels/09-assemble-otto/OttoIkea.png)

## Objectif

L’objectif de cette partie est d’obtenir un robot entièrement assemblé, prêt à être programmé et testé.

Un bon assemblage est important car un mauvais positionnement des servomoteurs peut empêcher le robot de marcher correctement.

## Matériel nécessaire

Avant de commencer, il faut vérifier que tout le matériel est présent.

![Matériel nécessaire](https://makerspace-amiens.fr/otto-mks/docs/tutoriels/09-assemble-otto/BOM.png)

Il faut notamment :

- les pièces imprimées en 3D ;
- la tête ;
- le corps ;
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

Avant de commencer, il faut prendre son temps et vérifier chaque étape.

> ⚠️ Les servomoteurs sont fragiles.  
> Il ne faut pas forcer leur rotation à la main, car cela peut abîmer les engrenages internes.

Il faut aussi faire attention au type de vis utilisé.  
Une vis trop longue ou mal placée peut endommager une pièce ou un servomoteur.

## Étapes d’assemblage

### Étape 1 - Assemblage du corps

Insérez les servomoteurs dans la pièce `Body`, aux emplacements prévus.

Les servomoteurs doivent être placés correctement et bien alignés.

<!-- Image possible :
![Assemblage du corps](images/assemblage-corps.png)
-->

### Étape 2 - Vissage des servomoteurs

Vissez les servomoteurs dans le corps du robot.

> ⚠️ Vérifiez le type de vis avant de visser.

Il ne faut pas trop serrer afin de ne pas abîmer le plastique imprimé en 3D.

### Étape 3 - Assemblage des palonniers

Découpez deux palonniers comme indiqué dans le tutoriel.

Insérez ensuite les palonniers dans les pièces `Leg`.

Les palonniers doivent être enfoncés jusqu’au fond de leur emplacement.

### Étape 4 - Positionnement des servomoteurs à 90°

Avant de fixer les jambes, il faut positionner les servomoteurs à 90°.

Pour cela, on utilise le programme Arduino réalisé précédemment pour mettre les servomoteurs en position neutre.

Cette étape est très importante, car elle permet d’avoir des jambes bien droites.

### Étape 5 - Assemblage des jambes

Branchez les deux servomoteurs sur la carte électronique.

Lancez le programme permettant de les positionner à 90°.

Insérez ensuite les jambes sur l’axe des servomoteurs dans la bonne position.

Après cela, débranchez les servomoteurs et vérifiez que les butées sont bien placées autour de la position neutre.

### Étape 6 - Vissage des jambes

Vissez les jambes sur les axes des servomoteurs.

> ⚠️ Vérifiez le type de vis avant de visser.

Les jambes doivent être bien fixées, mais il ne faut pas forcer.

### Étape 7 - Assemblage des palonniers des pieds

Insérez les palonniers dans les pièces `Left_Foot` et `Right_Foot`.

Ils doivent être enfoncés jusqu’à la butée.

### Étape 8 - Vissage des palonniers des pieds

Vissez fermement les palonniers dans les pieds.

> ⚠️ Vérifiez le type de vis utilisé.

Cette étape permet de créer une liaison solide entre les pieds et les servomoteurs.

### Étape 9 - Assemblage des servomoteurs des pieds

Branchez les deux servomoteurs des pieds sur la carte électronique.

Lancez à nouveau le programme de positionnement à 90°.

Insérez ensuite les servomoteurs dans les pièces `Foot` en respectant leur orientation.

Vérifiez que les butées sont bien à 90° de chaque côté de la position neutre.

### Étape 10 - Vissage des servomoteurs des pieds

Vissez les axes des servomoteurs des pieds.

> ⚠️ Vérifiez le type de vis avant de visser.

Il faut aussi faire attention à ne pas tirer sur les câbles.

### Étape 11 - Assemblage des pieds

Insérez les pieds dans les emplacements prévus sur les jambes.

Faites passer les fils des servomoteurs dans les trous de la pièce `Body`.

Les câbles doivent pouvoir remonter proprement à l’intérieur du robot.

### Étape 12 - Vissage des pieds

Vissez la deuxième vis des servomoteurs.

Les pieds doivent être bien fixés aux jambes.

### Étape 13 - Assemblage du capteur ultrason

Glissez le capteur ultrason HC-SR04 dans la pièce `Head`.

Il faut respecter le sens indiqué pour que les deux capteurs soient visibles à l’avant du robot.

> ⚠️ Les grilles avant du capteur ultrason sont fragiles.  
> Il faut éviter d’appuyer dessus.

### Étape 14 - Préparation de la carte électronique

Dévissez la rondelle et l’écrou du bouton de la carte électronique.

Conservez-les, car ils seront réutilisés pour fixer la carte dans la tête du robot.

### Étape 15 - Installation de la carte électronique

Insérez délicatement la carte électronique dans la pièce `Head`.

Vérifiez que les broches du capteur ultrason s’insèrent correctement dans le connecteur de la carte.

Le bouton doit être enfoncé jusqu’à la butée.

### Étape 16 - Assemblage de la tête

Remettez la rondelle, puis revissez l’écrou du bouton.

> ⚠️ L’ergot de la rondelle doit s’insérer dans l’un des trous prévus.

Cela permet de maintenir correctement la carte électronique dans la tête.

### Étape 17 - Installation de la batterie

Fixez la cosse 9V sur la batterie.

> ⚠️ La carte ne doit surtout pas être branchée à l’envers, sinon elle peut être endommagée.

Insérez ensuite la batterie dans son emplacement, avec les câbles orientés vers le haut.

### Étape 18 - Câblage

Branchez les servomoteurs sur la carte électronique en respectant l’ordre prévu.

Il faut également vérifier le sens des connecteurs :

- fil marron : masse ;
- fil rouge : +5V ;
- fil jaune : signal.

Branchez ensuite la batterie sur le connecteur d’alimentation.

Utilisez une bande de velcro pour organiser les câbles proprement à l’intérieur du robot.

### Étape 19 - Assemblage final

Refermez la tête sur le corps.

Appuyez légèrement sur les côtés pour faciliter l’emboîtement.

> ⚠️ Vérifiez qu’aucun câble n’est coincé entre la tête et le corps.

## Vérifications à effectuer

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

## Problèmes communs et solutions

### Le robot marche de travers

Cela peut venir d’un mauvais centrage des servomoteurs.

Il faut relancer le programme de positionnement à 90°, puis replacer les jambes ou les pieds correctement.

### Les pièces ne s’emboîtent pas correctement

Les pièces imprimées en 3D peuvent parfois avoir de légères différences de dimensions.

Solutions possibles :

- vérifier l’orientation des pièces ;
- poncer légèrement les zones qui bloquent ;
- vérifier les dimensions dans le slicer ;
- modifier légèrement l’échelle des pièces dans le slicer.

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

### Le robot ne s’allume pas

Il faut vérifier :

- la batterie ;
- la cosse 9V ;
- le connecteur d’alimentation ;
- le sens de branchement ;
- la carte électronique.

## Conclusion

Une fois l’assemblage terminé, le robot Otto est prêt à être programmé et testé.

Cette étape doit être réalisée avec soin, car le positionnement des servomoteurs et le rangement des câbles influencent directement le fonctionnement du robot.
```
