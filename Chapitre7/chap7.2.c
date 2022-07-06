//
// Created by Kamion on 06/07/2022.
//
// Variable Global à bannir ! En C

#include <stdio.h>
#include <stdlib.h>

int resultat = 0; // Déclaration de variable globale

void triple(int nombre); // Prototype de fonction

int main(int argc, char *argv[])
{
    triple(15); // On appelle la fonction triple, qui modifie la variable globale resultat
    printf("Le triple de 15 est %d\n", resultat); // On a accès à resultat

    return 0;
}

void triple(int nombre)
{
    resultat = 3 * nombre;
}

