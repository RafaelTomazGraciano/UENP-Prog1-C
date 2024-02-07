/*Implemente uma funcao recursiva para somar os elementos do vetor: 
int vet[10] = 1,2,3,4,5,6,7,8,9,10 */

#include <stdio.h>

int somatorio(int vet[], int n){
    if(n == 0) {
        return 0;
    }
    return vet[n - 1] + somatorio(vet, n - 1);
}

int main(){
    int vet[10] = {1,2,3,4,5,6,7,8,9,10}, n = 10;
    printf("Resultado: %d", somatorio(vet, n));
}