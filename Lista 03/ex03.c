/*Faca um programa que receba como entrada tres numeros positivos em ponto flutuante,
em seguida, mostre quantos deles estao acima da media aritmetica.*/

#include <stdio.h>

int main()
{
    float numero1, numero2, numero3, media;
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &numero3);
    media = (numero1+numero2+numero3)/3;

    if(numero1 > media){
        printf("\n %.2f e maior que a media",numero1);
    }
    if(numero2 > media){
        printf("\n %.2f e maior que a media", numero2);
    }
    if(numero3 > media){
        printf("\n %.2f e maior que a media", numero3);
    }
    return 0;
}