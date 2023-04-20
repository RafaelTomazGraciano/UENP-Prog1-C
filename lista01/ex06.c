/*Faca um programa que leia dois valores x e y e permute o conte ́udo das duas variaveis,
ou seja, o valor de x ser armazenado em y e vice-versa. Ao final, mostre o conteudo das
variaveis.*/

#include <stdio.h>

int main()
{
    float x, y, inversorx, inversory;
    printf("Digite o valor de x: ");
    scanf("%f",&x);
    printf("Digite o valor de y: ");
    scanf("%f",&y);
    inversorx=x;
    inversory=y;
    inversorx=inversory;
    inversory=inversorx;
    printf("O valor de x: %.2f\n",x);
    printf("O valor de y: %.2f\n",y);
    return 0;
}