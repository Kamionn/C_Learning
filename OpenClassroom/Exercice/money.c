//
// Created by Kamion on 14/07/2022.
/*
 Ecrire un programme de rendue de monnaie. En saissant le montant total des achats puis de la somme donnée, indiquer la monaie
 à rendre (en billet de 20$, 30$, 50$ et pièce de 1 et 2)

 Indications :
    - S'assurer que la somme donnée est bien supérieur à la somme des achats
    - Gérer le cas où on aurait payé un montant égal aux achat
    - Rendre le moins de billet / pièce possible
    - L'opérateur % (modulo) sera utile
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int purchases = 0, amount_paid = 0, result = 0;
    int bill500 = 0,bill200 = 0,bill100 = 0, bill50 = 0, bill20 = 0, bill10 = 0, bill5 = 0, coin2 = 0, coin1 = 0;

    printf("\n_____Bienvenue dans mon magasin_____!\n\n");
    printf("Entrez le total des achats : \n");
    scanf("%d", &purchases);
    printf("Entrez la somme payee : \n");
    scanf("%d", &amount_paid);

    if(amount_paid < purchases)
    {
        result = purchases - amount_paid;
        printf("Il vous manques %d euros pour payez.");
        return -1;
    }
    else if(amount_paid == purchases)
    {
        printf("Pas de monnaie a rendre");
        return -1;
    }
    else
    {
        result = amount_paid - purchases;

        bill500 = result / 500;
        result %= 500;
        bill200 = result / 200;
        result %= 200;
        bill100 = result / 100;
        result %= 100;
        bill50 = result / 50;
        result %= 50;
        bill20 = result / 20;
        result %= 20;
        bill10 = result / 10;
        result %= 10;
        bill5 = result / 5;
        result %= 5;

        coin2 = result / 2;
        result %= 2;
        coin1 = result / 1;
        result %= 1;

        printf("\n_____MONNAIE A RENDRE_____\n");
        if(bill500 > 0)
            printf("Billet(s) de 500 euros : %d\n", bill500);
        if(bill200 > 0)
            printf("Billet(s) de 200 euros : %d\n", bill200);
        if(bill100 > 0)
            printf("Billet(s) de 100 euros : %d\n", bill100);
        if(bill50 > 0)
            printf("Billet(s) de 50 euros : %d\n", bill50);
        if(bill20 > 0)
            printf("Billet(s) de 20 euros : %d\n", bill20);
        if(bill10 > 0)
            printf("Billet(s) de 10 euros : %d\n", bill10);
        if(bill5 > 0)
            printf("Billet(s) de 5 euros  : %d\n", bill5);
        if(coin2 > 0)
            printf("Piece(s) de 2 euros   : %d\n", coin2);
        if(coin1 > 0)
            printf("Piece(s) d'1 euro     : %d\n", coin1);
    }
    return 0;
}