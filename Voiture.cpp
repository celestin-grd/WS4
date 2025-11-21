#include <iostream>
#include "Voiture.h"

int Voiture::nbVoiture = 0;

Voiture::Voiture(void) {
    this->init_car(100, 3);
}

Voiture::Voiture(int vMax, int accel) {
    this->init_car(vmax, accel);
}

void Voiture::init_car(int vmax, int accel) {
    if (vmax > 100) {
        this->vmax = 100;}
    else {
        this->vmax = vmax;
    }
    if (accel > 3) {
        this->accel = 3;}
    else { this->accel = accel; }

    Voiture::nbVoiture++;
    this->vitesse = 0;
    std::cout << "Création de la voiture : " << Voiture::nbVoiture << std::enl;
}

void Voiture::accelerer(void) {
    int i;
    for (i = 0; this->vitesse < this->vitesseMax; i++) {
        std::cout << "Vitesse : " << this->vitesse << endl;
        this->vitesse += this->acceleration;
    }
}