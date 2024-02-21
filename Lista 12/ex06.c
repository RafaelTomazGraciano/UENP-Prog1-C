/*Faca uma funcao que receba como parametros uma matriz de inteiros e seu tamanho e
grave-a em um arquivo texto. Cada linha da matriz deve ser salva em uma linha do
arquivo.*/

#include <stdio.h>
#include <stdlib.h>

void arquivo(int **mat, int linhas, int colunas);

int main(){
    int matriz, linhas, colunas;
    printf("Digite o tamanho de linhas do vetor: ");
    scanf("%d", &linhas);
    printf("Digite o tamanho de colunas do vetor: ");
    scanf("%d", &colunas);
    arquivo(&matriz, linhas, colunas);
    return 0;
}

void arquivo(int **mat, int linhas, int colunas){
    FILE *arch;
    mat = (int **)  malloc(linhas * sizeof(int *));
    for(int i = 0; i < linhas; i++){
        mat[i] = (int *) malloc(colunas * sizeof(int));
    }
    arch = fopen("EX06.txt", "w");
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j ++){
            printf("Digite o valor do vetor na posicao %d: ", i);
            scanf("%d", &mat[i][j]);
            fprintf(arch, "%d ", mat[i][j]);
        }
        fprintf(arch, "\n");
    }
    printf("\nProcesso finalizado");
    free(mat);
    fclose(arch);
}