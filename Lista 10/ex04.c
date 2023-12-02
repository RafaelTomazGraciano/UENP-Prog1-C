/*Implemente um programa que leia duas matrizes de inteiros m1 e m2 de ordem M x N e
preencha uma terceira matriz soma que e resultado da soma de m1 e m2. As matrizes devem
ser alocadas dinamicamente. Nao esqueca de verificar se e possıvel fazer a alocacao de
memoria.*/

#include <stdio.h>
#include <stdlib.h>

void ler(int **m, int M, int N){
    for(int i = 0; i < M; i++){
        for(int j = 0 ; j < N; j++){
            printf("Digite o valor para a posicao %d %d: ",i,j);
            scanf("%d", &m[i][j]);
        }
    }
}

int main(){
    int **m1, **m2, **soma, M, N;
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &M);
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &N);
    m1 = (int **) malloc(M * sizeof(int *));
    m2 = (int **) malloc(M * sizeof(int *));
    soma = (int **) malloc(M * sizeof(int *));
    if(m1 == NULL || m2 == NULL || soma == NULL){
        printf("Erro: memoria insuficiente.");
        exit(1);
    }
    for(int i = 0; i < M; i++){
        m1[i] = (int *) malloc(N * sizeof(int));
        m2[i] = (int *) malloc(N * sizeof(int));
        soma[i] = (int *) malloc(N * sizeof(int)); 
        if(m1[i] == NULL || m2[i] == NULL || soma[i] == NULL){
            printf("Erro: memoria insuficiente.");
            exit(1);
        }
    }
    printf("\nPreenchendo Matriz 1\n");
    ler(m1, M, N);
    printf("Preenchendo Matriz 2\n");
    ler(m2, M, N);
    for(int i = 0; i < M; i++){
        for(int j = 0 ; j < N; j++){
            soma[i][j] = m1[i][j] + m2[i][j];
        }
    }
    printf("Matriz soma");
    for(int i = 0; i < M; i++){
        printf("\n");
        for(int j = 0 ; j < N; j++){
            printf("%d  ", soma[i][j]);
        }
    }
    free(m1);
    free(m2);
    free(soma);
    return 0;
}