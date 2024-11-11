#ifndef PARKING_H
#define PARKING_H
#include <stdio.h>

typedef enum {
    VOITURE,
    CAMION
} Type;

typedef struct {
    int heures;
    int minutes;
} Heure;

typedef struct {
    char immatriculation[15];
    Type type;
    Heure duree;
    int numeroPlace;
} Vehicule;

typedef struct Node {
    Vehicule vehicule;
    struct Node* suivant;
} Node;

typedef struct {
    Node* tete;
    int placesLibresVoitures;
    int placesLibresCamions;
} Parking;
#endif
