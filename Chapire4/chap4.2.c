#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int fruit;

   printf("   Fruit   \n");
   printf("\n");
   printf("1. Mangue\n");
   printf("2. Fraise\n");
   printf("3. Cerise\n");

   scanf("Votre fruit : %d", &fruit);

   switch (fruit)
    {
        case 1:
        printf("Tu as choisis une mangue");
        break;
        case 2:
        printf("Tu as choisis une fraise");
        break;
        default:
        printf("Fruit introuvable");
        break;
    }

   return 0;
}

