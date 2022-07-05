// Exercice Variable + Fonction 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fruit()
{
    int fruit = 0;
    
    while (fruit < 1 || fruit > 2)
    {
        printf("Fruit :\n");
        printf("1 : Fraise\n");
        printf("2 : Framboise\n");
        printf("Votre fruit ? ");
        scanf("%d", &fruit);
    }    
    
    return fruit;
}    

int main(int argc, char *argv[])
{    
    switch (fruit())
    {
        case 1:
            printf("Vous avez pris la fraise\n");
            break;
        case 2:
            printf("Vous avez pris la framboise\n");
            break;
    }
    return 0;
}

