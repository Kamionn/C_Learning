#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre1 = 0; 
    printf("Choisissez un nombre : ");
    scanf("Nombre2 choisis : %d /n", &nombre1);

    int nombre2 = 0; 
    printf("Choisissez un nombre : ");
    scanf("Nombre2 choisis : %d /n", &nombre2);

    int addition = 0, soustraction = 0, multiplication = 0, division = 0;
    addition = nombre1 + nombre2;
    printf("Addition : %d /n", addition);

    soustraction = nombre1 - nombre2;
    printf("Soustraction : %d /n", soustraction);

    multiplication = nombre1 * nombre2;
    printf("Multiplication : %d /n", multiplication);

    division = nombre1 / nombre2;
    printf("Division : %d /n", division);
    
}
