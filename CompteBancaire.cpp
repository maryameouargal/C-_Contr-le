#include <iostream>
#include "CompteBancaire.h"
using namespace std;

// Constructeur
CompteBancaire::CompteBancaire(string num, string tit, double sol) {
    numero = num;
    titulaire = tit;
    solde = sol;
}

// Méthode déposer
void CompteBancaire::deposer(double montant) {
    if (montant > 0) {
        solde += montant;
    }
}

// Méthode retirer
void CompteBancaire::retirer(double montant) {
    if (montant > 0 && solde >= montant) {
        solde -= montant;
    }
}

// Méthode afficher
void CompteBancaire::afficher() {
    cout << "Numero: " << numero << " | Titulaire: " << titulaire << " | Solde: " << solde << " DH" << endl;
}