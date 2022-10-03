//
// Created by Kamion on 06/07/2022.
// Exercice Fruit dans la cellule de la ram
//
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int fruit = 1;
    int *countFruit = &fruit;
    printf("Le fruit est dans la cellule : %d de la ram", countFruit);
}

