# EXCICE 1 :Analyse de code C++

Q1 : Déterminez le résultat affiché par ce programme.

L'affichage est 15 20.
x change de valeur (15) grâce au & (référence), tandis que y reste 20 car b est juste une copie.

Q2 : Expliquez la différence entre le passage par valeur et le passage par référence.

Passage par valeur : C'est le cas pour y. La fonction reçoit une copie, donc la variable originale reste sans changement.
Passage par référence : C'est le cas pour x. La valeur change car la fonction utilise directement la référence (la vraie variable en mémoire).

Q3 : Modifiez la fonction modifier() pour que les deux variables soient modifiées.

<img width="613" height="434" alt="C++_C_EX1" src="https://github.com/user-attachments/assets/99ac0e9e-5704-48d9-91d5-98c43942cb4c" />

Q4 : Expliquez le rôle de l'opérateur & dans la déclaration des paramètres.

En C++, l'opérateur & signifie le passage par référence. Il permet de modifier la variable originale directement dans la fonction.

# Exercice 2 : Classes et encapsulation 
<img width="725" height="402" alt="C++_C_EX2" src="https://github.com/user-attachments/assets/6908c2b5-de8e-427e-bc40-9f6847a98a42" />

# EXERCICE 3 : Héritage et polymorphisme 
<img width="736" height="306" alt="C++_C_EX3" src="https://github.com/user-attachments/assets/b9cb0f51-b9c7-4f93-a3f0-e6c73402a206" />
Q6 :  Rôle du destructeur virtuel 

Le destructeur de `Vehicule` doit être `virtual` pour éviter les fuites de mémoire.
