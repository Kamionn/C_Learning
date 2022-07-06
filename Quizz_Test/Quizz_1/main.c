//
// Created by Kamion on 06/07/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int nombreMystere = 0, nombreEntre = 0;
    const int MAX = 100, MIN = 1;
    srand(time(NULL)); // Correction [Erreur utilisation]
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN; // Correction [Erreur utilisation]
    do
    {
        printf("Quel est le nombre ? \n");
        scanf("%d", &nombreEntre);
        if (nombreMystere > nombreEntre)
            printf("C'est plus !\n\n");
        else if (nombreMystere < nombreEntre)
            printf("C'est moins !\n\n");
        else
            printf ("Bravo, vous avez trouve le nombre mystere !!!\n\n");
    } while (nombreEntre != nombreMystere); // Correction [Erreur symbole]

    return 0;
}

// Correction : https://github.com/OpenClassrooms-Student-Center/19980-apprenez-a-programmer-en-c/blob/master/QUIZ_P1/main.cpp