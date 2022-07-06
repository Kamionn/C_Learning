//
// Created by Kamion on 06/07/2022.
//
// Variable à utilisé !

#include <stdio.h>
#include <stdlib.h>

int incremente(); // 0

int main(int argc, char *argv[]) // 1
{
    printf("%d\n", incremente()); // 2
    return 0;
}

int incremente()
{
    static int nombre = 0; // 3

    nombre++; // 4
    return nombre; // 5
}