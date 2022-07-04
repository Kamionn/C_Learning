#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int condition = 0;

int main()
{
while (condition != 1)
{
    printf("Tapez le nombre 1 ! ");
    scanf("%d", &condition);
}
}