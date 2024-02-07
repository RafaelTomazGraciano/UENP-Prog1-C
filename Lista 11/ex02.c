/*Altere a funcao recursiva do exercıcio 1 de modo que o programa imprima todos os numeros
pares de 0 ate n em ordem crescente.*/

#include <stdio.h>

int imprime(int n, int valor){
    if (valor > n){
        return 0;
    }
    printf("%d ", valor);
    valor = imprime(n, valor + 2);
    return 0;
}

int main(){
    int n, valor = 0;
    do{
        printf("Digite um numero par inteiro: ");
        scanf("%d", &n);
        if(n % 2 != 0 || n < 0){
            printf("\nDeve ser um numero inteiro positivo par\n");
        }
    }while(n % 2 != 0 || n < 0);
    imprime(n, valor);
    return 0;
}