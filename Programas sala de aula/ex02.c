/*Verfica se um numero e par ou impar*/

#include <stdio.h>

int main()
{
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    if (x % 2 == 0) {
        printf("\n E par");
    }
    else {
        printf("\n E impar");
    }
    return 0;
}
