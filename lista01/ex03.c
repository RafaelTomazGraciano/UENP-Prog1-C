/*Faca um programa que leia o preco de um produto em reais, a taxa de conversao para o
dolar e para o euro e, em seguida, converta o valor de acordo com as taxas fornecidas.*/

#include <stdio.h>

int main()
{
    float precodoproduto, dolar, euro;
    printf("Digite o preco do produto: ");
    scanf("%f",&precodoproduto);
    printf("Dite o preco do dolar: ");
    scanf("%f",&dolar);
    printf("Digite o preco do euro: ");
    scanf("%f",&euro);
    printf("O valor do produto em dolar e: %.2f\n",precodoproduto/dolar);
    printf("O valor do produto em euro e: %.2f",precodoproduto/euro);
    return 0;
}