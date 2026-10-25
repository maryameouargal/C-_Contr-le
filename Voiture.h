#ifndef VOITURE_H
#define VOITURE_H

#include "Vehicule.h"

class Voiture : public Vehicule { 
    // Q3 : Héritage
private:
    int nombrePortes;
    string typeCarburant;

public:
    // Appel du constructeur parent 
    Voiture(string immat, string mq, double vmax, int portes, string carburant) 
        : Vehicule(immat, mq, vmax) {
        nombrePortes = portes;
        typeCarburant = carburant;
    }

    // Q4 : Redéfinition 
    void afficherDetails() override {
        Vehicule::afficherDetails(); // Appelle la méthode du parent (comme super en Java)
        cout << " | Portes: " << nombrePortes << " | Carburant: " << typeCarburant << endl;
    }
};

#endif