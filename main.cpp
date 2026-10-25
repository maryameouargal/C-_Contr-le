#include <iostream>
#include "Voiture.h"
#include "Camion.h"

using namespace std;

int main() {
    // Q5 : Tableau de pointeurs de type Vehicule*
    Vehicule* tableau[2];

    // Création des objets
    tableau[0] = new Voiture("AB-123-CD", "BMW", 180.0, 5, "Essence");
    tableau[1] = new Camion("EF-456-GH", "RENAULT", 120.0, 20.0, 3);

    // Affichage en utilisant le polymorphisme
    for (int i = 0; i < 2; i++) {
        tableau[i]->afficherDetails(); 
    }

    // Nettoyage de la mémoire 
    delete tableau[0];
    delete tableau[1];

    return 0;
}