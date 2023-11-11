/*Implemente uma funcao que receba um vetor de inteiros, o tamanho do vetor e um inteiro
pos passado por referencia. A funcao retorna o maior elemento do vetor e, na variavel pos,
a posicao do maior elemento do vetor.*/

#include <stdio.h>

int vetor(int *pos){
    int n, maior = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    int *ptr = vetor;
    for(int i = 0; i < n; i++){
        if(ptr[i] > maior){
            maior = ptr[i];
            *pos = i;
        }
    }
    return maior;
}

int main(){
    int pos;
    printf("Maior elemento do vetor: %d\n", vetor(&pos));
    printf("Posicao: %d", pos);
    return 0;
}

