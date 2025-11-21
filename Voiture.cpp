#include <iostream>
#include "Voiture.h"

int Voiture::nbVoiture = 0;

Voiture::Voiture(void) {
    vitesseMax = 100;
    acceleration = 0;
    nbVoiture++;
}

Voiture::Voiture(int vMax, int accel) {
    vitesseMax = Max;
    acceleration = accel;
}

Voiture::accelerer(void);