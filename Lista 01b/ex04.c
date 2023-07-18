/*Implemente um programa em C que leia um valor representando o gasto realizado por um
cliente do restaurante e imprima o valor total a ser pago, considerando os 10% do garcom.*/

#include <stdio.h>

int main()
{
    float valorGasto;
    printf("Digite o valor gasto no restaurante: ");
    scanf("%f", &valorGasto);
    printf(" O valor total a ser pago e: %.2f", valorGasto*1.1);
    return 0;
}