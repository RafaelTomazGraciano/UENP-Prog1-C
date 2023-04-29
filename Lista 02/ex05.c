/*Implemente um programa em C leia quatro valores inteiros A, B, C e D. A seguir, calcule
e mostre a diferenca do produto de A e B pelo produto de C e D.*/

#include <stdio.h>

int main()
{
    float A, B, C, D;
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);
    printf("Digite o valor de D: ");
    scanf("%f", &D);
    printf("A diferenca do produto de A e B pelo produto de C e D e: %.2f", (A*B)-(C*D));
    return 0;
}