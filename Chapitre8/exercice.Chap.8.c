//
// Created by Kamion on 06/07/2022.
//
// Refaire le chap8 (J'ai pas d'inspi)

#include <stdio.h>
#include <stdlib.h>

void decoupesHeures(int heures, int minutes);

int main()
{
    int heures = 1, minutes = 10;
    decoupesHeures(heures, minutes);
    printf("%d heures et %d minutes", heures, minutes);
}

void decoupesHeures(int heures, int minutes)
{
    heures = minutes / 60;  // 90 / 60 = 1
    minutes = minutes % 60; // 90 % 60 = 30
}

