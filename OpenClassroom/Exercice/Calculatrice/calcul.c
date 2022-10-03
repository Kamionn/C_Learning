//
// Created by Kamion on 14/07/2022.
//

#include "calcul.h"
#include <stdio.h>

void menu(void)
{
    printf("__________________\n");
    printf("1.Addition\n2.Soustraction\n3.Multiplication\n4.Division\n5.Quitter le programme\n");
    printf("__________________\n");
}

void numbre_choice(int choice)
{
    int number1 = 0, number2 = 0;
    int result = 0;
    do
    {
        printf("Entrez un premier nombre : ");
        scanf("%d", &number1);
        printf("Entrez un second nombre : ");
        scanf("%d", &number2);

        if (number1 < -1000 || number1 > 1000 || number2 < -1000 || number2 > 1000)
        printf("Vous avez choisis un nombre inferieur à -1000 ou superieur à 1000");
        else
        {
            if (choice == 1) result = addition(number1, number2);
            else if (choice == 2) result = soustraction(number1, number2);
            else if (choice == 3) result = multiplication(number1, number2);
            else if (choice == 4) result = division(number1, number2);
            printf("Resultat du calcul %d\n", result);
        }
    }
    while(number1 < -1000 || number1 > 1000 || number2 < -1000 || number2 > 1000);
}

int addition(int numberA, int numberB)
{
    return numberA + numberB;
}
int soustraction(int numberA, int numberB)
{
    return numberA - numberB;
}
int multiplication(int numberA, int numberB)
{
    return numberA * numberB;
}
int division(int numberA, int numberB)
{
    return numberA / numberB;
}
