#include <iostream>
#include "CompteBancaire.h" 

using namespace std;

int main() {
    // 1. Création de deux comptes
    CompteBancaire compte1("C001", "Rina", 100000.0);
    CompteBancaire compte2("C002", "ME", 50.0);

    // 2. Effectuer un dépôt et un retrait
    compte1.deposer(200.0);
    compte2.retirer(100.0);

    // 3. Afficher les soldes
    cout << "Soldes finaux" << endl;
    compte1.afficher();
    compte2.afficher();

    return 0;
}