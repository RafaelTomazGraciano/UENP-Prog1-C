/*Verifiacar  desconto e aplicavel no cinema*/

#include <stdio.h>

int main()
{
    int x, y;
    printf("Digite a idade do Casal \n");
    scanf ("%d %d", &x, &y);
    if (x % 2 == 1 && y % 2 == 1) {
        printf("\n Desconto concedido \n");
    }
    else {
        printf(" \n Desconto nao concedido \n");
    }
    return 0;
}