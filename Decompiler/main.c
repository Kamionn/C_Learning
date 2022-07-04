#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre1 = 0, nombre2 = 0, addition = 0, soustraction = 0, multiplication = 0, division = 0, modulos = 0;
    printf("Choisissez un nombre : ");
    scanf("%d", &nombre1);
    printf("Choisissez un nombre : ");
    scanf("%d", &nombre2);

    addition = nombre1 + nombre2;
    printf("Addition : %d \n", addition);

    soustraction = nombre1 - nombre2;
    printf("Soustraction : %d \n", soustraction);

    multiplication = nombre1 * nombre2;
    printf("Multiplication : %d \n", multiplication);

    division = nombre1 / nombre2;
    printf("Division : %d \n", division);

    modulos = nombre1 % nombre2;
    printf("Division : %d \n", modulos);
}
