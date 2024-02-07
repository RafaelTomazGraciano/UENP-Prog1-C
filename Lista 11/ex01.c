/*Implemente uma funcao recursiva que receba um numero inteiro positivo par n e imprima
todos os numeros pares de n ate 0 em ordem decrescente.*/

#include <stdio.h>

int imprime(int n){
    int valor = n;
    if(n < 0){
        return 0;
    }
    printf("%d ", valor);
    valor = imprime(n - 2);
    return 0;
}

int main(){
    int n;
    do{
        printf("Digite um numero par inteiro: ");
        scanf("%d", &n);
        if(n % 2 != 0 || n < 0){
            printf("\nDeve ser um numero inteiro positivo par\n");
        }
    }while(n % 2 != 0 || n < 0);
    imprime(n);
    return 0;
}