#ifndef CAMION_H
#define CAMION_H

#include "Vehicule.h"

class Camion : public Vehicule { 
    // Q3 : Héritage
private:
    double capaciteCharge;
    int nombreEssieux;

public:
    Camion(string immat, string mq, double vmax, double capacite, int essieux) 
        : Vehicule(immat, mq, vmax) {
        capaciteCharge = capacite;
        nombreEssieux = essieux;
    }

    // Q4 : Redéfinition 
    void afficherDetails() override {
        Vehicule::afficherDetails();
        cout << "  Capacite: " << capaciteCharge << "  Essieux: " << nombreEssieux << endl;
    }
};

#endif