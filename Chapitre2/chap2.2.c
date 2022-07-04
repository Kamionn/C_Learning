// declarez des variables

#include <stdio.h> // Librairies
#include <stdlib.h>  // Librairies

int main(int argc, char *argv[]) // Fonction
{
  int age = 0; // On initialise la variable à 0
  printf("Quel age avez-vous ? ");
  scanf("%d", &age); // On demande d'entrer l'âge avec scanf
  printf("Ah ! Vous avez donc %d ans !\n\n", age);
}
