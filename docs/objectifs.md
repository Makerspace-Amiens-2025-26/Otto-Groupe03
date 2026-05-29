---
layout: default
nav_order: 3
title: Objectifs du projet
---

# Introduction

Le projet OTTO-MKS, c'est le tout premier projet de robotique des premières années d'ingénieur à UniLaSalle Amiens.

Le but est simple : fabriquer et programmer un petit robot humanoïde en équipe. Nous sommes partis d'un modèle open-source ultra-connu (le robot Otto DIY), et le MakerSpace de l'école l'a amélioré pour créer l'OTTO-MKS, une version plus puissante connectée en Bluetooth et Wi-Fi.

Ce projet nous permet d'apprendre les bases du métier d'ingénieur :

* Mécanique : Modéliser et imprimer des pièces en 3D.

* Électronique : Connecter les moteurs et les capteurs.

* Programmation : Coder les mouvements et l'intelligence du robot.

Le point culminant du projet ? Les Ottolympiades ! Un grand tournoi où nos robots s'affrontent lors de la Journée des Projets dans des épreuves de course, de sumo et de tir à la corde.

Ce document présente notre travail, nos choix techniques et notre robot final pour la compétition.

## Contexte du Projet

Le projet OTTO-MKS est une version sur mesure ("made in UniLaSalle Amiens") du célèbre robot humanoïde open-source Otto DIY. Le robot original a été créé à l'origine pour enseigner les bases de la robotique, des STEM (Sciences, Technologie, Ingénierie, Mathématiques) et de la programmation.

Le MakerSpace d'Amiens a repris ce concept open-source pour l'adapter aux besoins spécifiques de ses étudiants et pour en faire le tout premier projet d'ingénierie des étudiants de première année. Pour cela, l'équipe du MakerSpace a conçu une version améliorée du robot :

* l'apprentissage par la pratique (Learning by doing), mêlant modélisation 3D (via OnShape), impression 3D des pièces mécaniques, assemblage de composants (servomoteurs, capteurs ultrason) et programmation (via l'IDE Arduino).

* Une carte électronique sur mesure (Otto-MKS) : Conçue au MakerSpace, elle intègre un microcontrôleur performant (ESP32-C3) offrant des capacités de communication sans fil (Bluetooth et Wi-Fi) permettant par exemple de piloter le robot avec un smartphone.

## Objectifs du Projet

Les objectifs du projet OTTO-MKS s'articulent autour de trois grands axes : pédagogique, technique et événementiel.

**Objectifs pédagogiques**:

On travaille par groupe de trois avec pour objectifs de :

* Découvrir la fabrication numérique : S'approprier les outils d'un MakerSpace, comprendre la modélisation 3D et gérer les contraintes de l'impression 3D.

* S'initier à la programmation embarquée : Programmer la logique du robot pour qu'il puisse marcher, détecter des obstacles et réagir à son environnement.

* Développer des compétences transversales : Travailler en équipe, documenter techniquement un projet (via un rapport ou un site web) et vulgariser leur travail à travers une vidéo de présentation professionnelle d'une minute.

**Objectifs techniques**:

* S'approprier et itérer : Au-delà du modèle de base fourni, l'objectif est de faire preuve de créativité. On doit modifier le code et le design du robot, y ajouter des fonctionnalités (bras articulés, écrans OLED, capteurs gyroscopiques, lumières).

* Fiabiliser et optimiser : Rendre le robot robuste mécaniquement et performant au niveau du code pour répondre à des contraintes physiques réelles.

* Améliorer ses compétences avec les logiciels et dans le code (Arduino)

**Objectifs événementiel**:

Le projet culmine chaque année lors de la Journée des Projets d'UniLaSalle Amiens, à travers un grand tournoi de robotique ludique et technique appelé les Ottolympiades (arbitré par l'association UniMakers). L'objectif ultime des étudiants est de préparer leur robot à valider l'homologation technique pour s'affronter dans 4 épreuves :

Chrono Challenge : Une course en ligne droite pour tester la vitesse pure.

Course d'obstacles : Un parcours d'agilité pour tester la détection de l'environnement.

Otto Sumo : Un duel sur un ring où le robot doit pousser son adversaire vers la sortie.

Tir à la corde : Une épreuve de force motrice par équipes de 3 robots.

# Existant

Notre projet s'appuie sur le robot bipède open-source Otto DIY, largement utilisé dans le domaine éducatif pour l'initiation aux STEM. Ce système existant est composé d'une structure imprimable en 3D, de 4 servomoteurs SG90 pour la locomotion, et d'un capteur ultrason HC-SR04 pour la détection d'obstacles.

Dans sa version standard, le contrôle est assuré par un microcontrôleur Arduino Nano. Bien que fonctionnelle pour un usage récréatif, cette configuration présente des limites techniques pour les objectifs des Ottolympiades : l'absence de connectivité sans fil native (Wi-Fi/Bluetooth) et la fragilité du câblage interne due à la superposition de cartes (Shield + Arduino).

C'est pour pallier ces limites que le MakerSpace d'UniLaSalle Amiens a développé la version OTTO-MKS, remplaçant cet existant par une carte électronique sur mesure intégrant une puce ESP32-C3.

# Cahier des Charges

**Dimensions**

Concernant les dimensions, Le robot devra faire au maximum :

Largeur : 150 mm
Longueur : 150 mm
Hauteur : 200 mm

**Déplacement**

Pour les déplacements, le robot devra se déplacer en marchant.
L’interrupteur d’alimentation doit rester accessible en tout temps par l’arbitre afin d’arrêter le robot en cas de situation de danger pour lui-même, les autres robots, ou les éléments de jeu.

**Fabrication**

Le robot doit être fabriqué et programmé par les étudiant(e)s sans l’utilisation d’un kit du commerce. 
La modification est fortement encouragée mais ces derniers ne doivent pas pouvoir endommager le robot adverse. Les dispositifs présentant un danger sont évidemment proscrit.

**Mode de controle**

En fonction de l’épreuve, deux modes de fonctionnement pourront vous être demandés, précisés dans le règlement de l’épreuve :

* Mode autonome
Le robot doit être en mesure de réaliser l’épreuve sans aide extérieure ; il devra donc être programmé à l’avance pour jouer. Le signal de démarrage est propre à chaque épreuve et est spécifié dans son règlement.

* Mode télécommandé
Vous devrez programmer une solution de contrôle à distance, par exemple grâce à l’application RemoteXY.





