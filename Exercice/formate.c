//
// Created by Kamion on 14/07/2022.
//
/* [Révision : Affichage / saisie, Variables]
 > Ecrire un programme qui demande un nombre entier à l'utilisateur
 Et affiche la valeur de la saisie en octal et héxadécimal
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int a = 0;
    printf("Entrez un nombre entier :\n");
    scanf("%d", &a);
    printf("Valeur en octal : %o\n", a);
    printf("Valeur en hexa : %x\n", a);
    return 0;
}

