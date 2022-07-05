#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Boucle infinis avec compteur avec incréamentation avec While

int main()
{
    int condition = 50;

    while (condition != 0)
    {
        printf("%d\n", condition);
        condition--;
    }
    printf("%d\n", condition);
    return 0; 
}