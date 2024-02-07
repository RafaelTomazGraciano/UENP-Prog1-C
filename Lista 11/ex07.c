/*Crie uma funcao recursiva que calcule a soma dos elementos do
array comecando do ultimo elemento ate o primeiro.*/

#include <stdio.h>
#include <stdlib.h>

int calcular(int vet[], int n){
    if(n == 0) {
        return 0;
    }
    return vet[n - 1] + calcular(vet, n - 1);
}


int main(){
    int *vet, n;
    printf("Digite o tamnho do vetor: ");
    scanf("%d", &n);
    vet = (int *) malloc(n * sizeof(int *));
    if(vet == NULL){
        printf("Erro: memoria insuficiente");
        exit(1);
    }
    for(int i = 0; i < n; i++){
        printf("Valor do vetor na posicao %d: ", i);
        scanf("%d", &vet[i]);
    }
    printf("Soma: %d", calcular(vet,n));
    free(vet);
    return 0;
}