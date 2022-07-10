//
// Created by Kamion on 10/07/2022.
//

#include <stdio.h>

void triple(int* nombre){
    *nombre *= 3;
}

int main(){
    int value = 10;
    int* pointeur = &value;

    triple(pointeur);
    printf('La valeur de value est %d \n', value);
}