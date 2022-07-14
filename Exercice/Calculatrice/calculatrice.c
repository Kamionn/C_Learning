//
// Created by Kamion on 14/07/2022.
//
/* [Révision] modulaire
 * Ecrire un programme de calculatrice simple pour 2 nombres ok
 *  - Afficher un menu principal proposant 4 type de calcule (+, -, / et *) ou de quitter ok
 *  - Une fois le calcul choisis, demander la saisie de 2 nombres et afficher le résultat. ok
 *  - Rediriger sur le menu principal ok
*/

#include <stdio.h>
#include <stdlib.h>
#include "calcul.h"

void app(void)
{
    int choice = 0;

    do
    {
        menu();
        printf("> ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                // Addition
                numbre_choice(choice);
                    break;
            case 2:
                // Soustraction
                numbre_choice(choice);
                break;
            case 3:
                // Multiplication
                numbre_choice(choice);
                break;
            case 4:
                // Division
                numbre_choice(choice);
                break;
            case 5:
                // Quit
                exit(-1);
                break;
            default:
                printf("Option incorrect !\n");
                break;
        }
    }
    while(choice !=5);
}

int main(void)
{
    app();
    return 0;
}