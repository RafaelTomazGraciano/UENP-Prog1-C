/*Implemente uma funcao recursiva responsavel por converte um numero n na base decimal
para binaria.*/

#include <stdio.h>

int converte(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return n % 2 + 10 * (converte(n / 2));
}


int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("%d", converte(n));
    return 0;
}