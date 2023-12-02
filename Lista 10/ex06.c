/*Implemente uma funcao que receba como parametro um valor n e retorne o ponteiro para
uma matriz alocada dinamicamente contendo n linhas e n colunas. Preencha a matriz com
o valor 1 na diagonal secundaria e 0 nas demais posicoes.*/

#include <stdio.h>
#include <stdlib.h>

int **parametro(int n){
    int **p = (int **) malloc(n * sizeof(int *));
    if(p == NULL){
        printf("Erro: memoria insuficiente.");
        exit(1);
    }
    for(int i = 0; i < n; i++){
        p[i] = (int *) malloc(n * sizeof(int));
        if(p == NULL){
            printf("Erro: memoria insuficiente.");
            exit(1);
        }
    }
    return p;
}

int main(){
    int n, **matriz;
    printf("Digite a quantidade de linhas e colunas que a matriz tera: ");
    scanf("%d", &n);
    matriz = parametro(n);
    for(int i = 0; i < n; i++){
        for(int j =0; j < n; j++){
            if(i+j == n-1)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++){
        printf("\n");
        for(int j =0; j < n; j++){
            printf("%d  ", matriz[i][j]);
        }
    }
    return 0;
}