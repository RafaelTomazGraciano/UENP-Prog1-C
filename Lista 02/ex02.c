/*Faca um programa que receba como entrada tres numeros inteiros e, em seguida, exiba o
menor deles.*/

#include <stdio.h>

int main()
{
    int numero1, numero2, numero3, menor;
    printf("Digite o numero 1: ");
    scanf("%d", &numero1);
    printf("Digite o numero 2: ");
    scanf("%d", &numero2);
    printf("Digite o numero 3: ");
    scanf("%d", &numero3);
    if(numero1 < numero2 && numero1 < numero3){
        menor = numero1;
    }
    else if(numero2 < numero1 && numero2 < numero3){
        menor = numero2;
    }
    else{
        menor = numero3;
    }
     printf("\n O menor numero e: %d", menor);
    return 0;
}