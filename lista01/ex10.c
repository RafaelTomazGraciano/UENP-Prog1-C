/*Faca um programa que receba a distancia total percorrida em km e o total de combustıvel
gasto em litros, calcule e mostre o consumo medio de um veıculo.*/

#include <stdio.h>

int main()
{
    float distancia, combustivel;
    printf("Digite a distancia total percorrida em Km: ");
    scanf("%f",&distancia);
    printf("Digite o toatl de combustivel gasto em litros: ");
    scanf("%f",&combustivel);
    printf("O consumo medio do seu veículo e: %.2f Km/L",distancia/combustivel);

    return 0;
}