//
// Created by Kamion on 14/07/2022.
//
/* [Révision : Boucles]
 * Ecrire un programme qui calcule la somme des entiers d'un nombre à un autre (maximum : entre 1 et 1000)
 *
 * Indication :
 *  -Prévoir le cas où "min" serait plus grand que "max" est quitter le programme
 *  - Prévoir le cas ou "min" serait plus petit que 1 et "max" plus grand que 1000
 */


#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int min = 0, max = 0, result = 0;
    printf("Entre un nombre entre 1 et 1000 : \n");
    scanf("%d", &min);

    if (min <1) {
        printf("Le nombre est inferieur a un");
        return -1;
    }

    printf("Entre un nombre entre 1 et 1000 : \n");
    scanf("%d", &max);

    if (max > 1000) {
        printf("Le nombre est superieur a mille");
        return -1;
    }

    if(min > max)
    {
        printf("Error Math");
        return -1;
    }

    if (min != max)
    {
        result = min + max;
        printf("Somme final : %d", result);
        return 0;
    }
}