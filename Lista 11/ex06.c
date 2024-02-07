/*Implemente uma funcao recursiva para calcular a soma dos elementos de um array. Por
exemplo, se o array dado for:
• int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
a resposta deve ser 55*/

#include <stdio.h>
#include <stdlib.h>

int calcular(int vet[], int n, int soma){
    if(soma == n) {
        return 0;
    }
    return vet[soma] + calcular(vet, n, soma + 1);
}


int main(){
    int *vet, n, soma = 0;
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
    printf("Soma: %d", calcular(vet,n, soma));
    free(vet);
    return 0;
}