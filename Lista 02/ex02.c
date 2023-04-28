/*A  area do triangulo  ́e dada por:

base ∗ altura/2

Implemente um programa em C que receba a base e a altura de um triangulo e imprima a
sua  ́area.*/

#include <stdio.h>

int main()
{
    float base, altura;
    printf("Digite o valor da base do triangulo: ");
    scanf("%f", &base);
    printf("Digite o valor da altura do triangulo: ");
    scanf("%f", &altura);
    printf("A area do triangulo e: %.2f", base*altura/2);
    return 0;
}