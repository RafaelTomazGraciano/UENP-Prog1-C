/*Faca um programa que receba como entrada 3 numeros inteiros e e exiba esses numeros em
ordem decrescente. Desafio: tente utilizar apenas 4 comandos if.*/

#include <stdio.h>

int main()
{
    int numero1, numero2, numero3, x;
    printf("Digite o numero 1: ");
    scanf("%d", &numero1);
    printf("Digite o numero 2: ");
    scanf("%d", &numero2);
    printf("Digite o numero 3: ");
    scanf("%d", &numero3);

     if(numero3 > numero1 ){
        x = numero1;
        numero1 = numero3;
        numero3 = x;
     }
     if(numero2 > numero1){
        x = numero1;
        numero1 = numero2;
        numero2 = x;
     }
     if(numero3 > numero2){
        x = numero2;
        numero2 = numero3;
        numero3 = x;
     }
     printf("Os numeros em ordem decrescente e %d %d %d", numero1, numero2, numero3);
    return 0;
}