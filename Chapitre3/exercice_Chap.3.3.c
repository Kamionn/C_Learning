#include <stdio.h>
#include <stdlib.h>

// Calcul de fonction + Incrémentation (Addition)

int main()
{
    int nombre1 = 1, nombre2 = 0,  courte = 2,resultat;

    // Forme "Longue"
    resultat = nombre1 + nombre2 + 2;
    printf("Nombre incremente : %d",resultat); // Résultat = 3

    // Forme "Courte"
    courte += 4; // nombre vaut 6...
    courte -= 3; // ... nombre vaut maintenant 3
    courte *= 5; // ... nombre vaut 15
    courte /= 3; // ... nombre vaut 5
    courte %= 3; // ... nombre vaut 2 (car 5 = 1 * 3 + 2)
}