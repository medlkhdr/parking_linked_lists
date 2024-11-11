# parking_linked_lists
# Gestion de Stationnement en C

## Objectif du Projet

L'objectif de cet exercice est de créer un programme en langage C pour gérer le stationnement de deux types de véhicules : des voitures et des camions dans un parking payant.

### Tarifs

- **Voitures** : 5 Dhs/heure
- **Camions** : 10 Dhs/heure

### Caractéristiques des Véhicules

Chaque véhicule (voiture ou camion) est caractérisé par les éléments suivants :
- Numéro d’immatriculation (une chaîne de caractères)
- Type (voiture ou camion)
- Durée de stationnement (en heures et minutes)
- Numéro de place dans le parking

### Caractéristiques du Parking

Le parking est considéré comme une liste possédant une seule entrée et une seule sortie. Il peut contenir jusqu’à 50 places numérotées : 10 pour les camions et 40 pour les voitures. Il est caractérisé par les propriétés suivantes :
- État (disponible ou plein)
- Nombre de places libres (pour voitures et camions)

## Structures de Données

1. **Enumération Type** : Permet de définir le type du véhicule.
2. **Structure Heure** : Représente la durée de stationnement d’un véhicule.
3. **Structure Véhicule** : Représente un véhicule (voiture ou camion).
4. **Liste Chaînée Parking** : Rassemble tous les véhicules stationnés.

## Fonctions Principales

1. Saisie et affichage des informations d’un véhicule.
2. Fonction `estPlein()` pour déterminer si le parking est plein.
3. Fonction `Stationnement_Vehicule()` pour affecter à un véhicule la première place libre dans le parking.
4. Fonction `Quitter_Parking()` pour supprimer un véhicule qui sort du parking et calculer le montant à payer.
5. Gestion des véhicules attendant sur le trottoir lorsque le parking est plein.

## Auteurs

PR. ELALAOUI Hasna  
Structures de Données en C  
Filière : IAP – S3
