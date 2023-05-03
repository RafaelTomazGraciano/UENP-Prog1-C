#include <stdio.h>

int main()
{
    int resto, x, e_par;
    printf("Digite um numero: ");
    scanf("%d", &x);
    resto = (x%2);
    e_par = (resto == 0);
    if (!e_par) {
        printf("Impar \n");
    }
    else {
        printf("Par");
    }
    return 0;
}