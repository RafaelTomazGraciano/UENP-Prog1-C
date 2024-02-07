/*Implemente uma funcao recursiva que receba dois numeros inteiros x e n e calcule o valor
de x^n*/

#include <stdio.h>

int potencia(int n, int x){
    if(x == 0){
        return 1;
    }
    else if(x == 1){
        return n;
    }
    return n * potencia(n,x-1);
}

int main(){
    int n,x;
    printf("Digite o valor da base: ");
    scanf("%d", &n);
    printf("Digite o valor do epxoente: ");
    scanf("%d", &x);
    printf("Resultado: %d", potencia(n,x));
}