#ifndef COMPTE_BANCAIRE_H
#define COMPTE_BANCAIRE_H

#include <string>
using namespace std;

class CompteBancaire {
private:
    // Encapsulation : attributs privés
    string numero;
    string titulaire;
    double solde;

public:
    // Constructeur paramétré
    CompteBancaire(string num, string tit, double sol);

    // Méthodes
    void deposer(double montant);
    void retirer(double montant);
    void afficher();
};

#endif