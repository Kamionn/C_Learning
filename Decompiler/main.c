// declarez des variables

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // Équivalent de int main()
{
  // instruction
  int chocolat = 2, brioche = 1;
 // printf("Vous avez %d de chocolat et %d de brioche", chocolat, brioche);
  scanf("Vous avez %d de chocolat et %d de brioche", &chocolat, &brioche);
  return 0;
}
