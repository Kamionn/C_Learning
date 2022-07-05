// Crée un multiplicateur avec double fontion

#include <stdio.h>
#include <stdlib.h>

int multiplication(int multiple)
{
    return 2 * multiple; 
}

int main()
{
    int nombre = 0, number = 0;
    printf("Entre un numero a multiplier : ");
    scanf("%d", &nombre);

    number = multiplication(nombre);
    printf("Resultat : %d", number);

    return 0;
}