#ifndef VEHICULE_H
#define VEHICULE_H

#include <iostream>
#include <string>
using namespace std;

class Vehicule {
protected: 
    string immatriculation;
    string marque;
    double vitesseMax;

public:
    // Q2 : Constructeur paramétré
    Vehicule(string immat, string mq, double vmax) {
        immatriculation = immat;
        marque = mq;
        vitesseMax = vmax;
    }

    // Q4 : Méthode virtuelle
    virtual void afficherDetails() {
        cout << "Immat: " << immatriculation << " | Marque: " << marque << " | Vitesse Max: " << vitesseMax;
    }

    // Q6 : Destructeur virtuel 
    virtual ~Vehicule() {}
};

#endif