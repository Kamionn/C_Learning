//
// Created by Kamion on 10/07/2022.
//
// Les pointeurs

#include <stdlib.h>
#include <stdio.h>

void MultiplicationFruit(int *FruitMultiplier);

int main()
{
    int fruit = 15;
    MultiplicationFruit(&fruit);
    printf("Vous avez %d fruits", fruit);
    return 0;
}

void MultiplicationFruit(int *FruitMultiplier)
{
    *FruitMultiplier *= 3; // On multiplie par 3 la valeur de nombre
}