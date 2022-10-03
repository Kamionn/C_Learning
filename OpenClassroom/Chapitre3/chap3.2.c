#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{   
    // Permet de rendre un nombre négatif -> positif
    double absolu = 0, nombre = -27;
    absolu = fabs(nombre); 

    // Arrondis un chiffre 
    double dessus = 0, nombre = 18.2;
    dessus = ceil(nombre); // dessus vaudra 19

    // Calculer une puissance
    double resultat = 0, nombre = 2;
    resultat = pow(nombre, 3); // Résultat vaudra 2^3 = 8

    // Calculer un racine carré
    double resultat = 0, nombre = 100;
    resultat = sqrt(nombre); // Résultat vaudra 10

}
