/*crie uma funcao recursiva para calcular o somatorio de 1 ate n*/

#include <stdio.h>

int somatorio(int n){
    if(n == 1)
        return n;
    return n + somatorio(n-1);
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Resultado: %d", somatorio(n));
    return 0;
}
