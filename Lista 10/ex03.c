/*Implemente um programa que leia uma matriz de inteiros alocada dinamicamente, em que
o numero de linhas e o numero de colunas sao determinados pelo usuario. Verifique quais
elementos da matriz sao ımpares e multiplos de 7. Na sequencia, armazene os elementos
identificados em vetor, tambem alocado dinamicamente, e mostre-os na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int **p, quant_linhas, quant_colunas, cont = 0, *array, k = 0;
    printf("Digite o tamanho de linhas: ");
    scanf("%d", &quant_linhas);
    printf("Digite o tamanho de colunas: ");
    scanf("%d", &quant_colunas);
    // aloca um array de ponteiros, um para cada linha
    p = (int **) malloc(quant_linhas * sizeof(int *));
    // cada um dos ponteiros recebera um array de inteiros
    for(int i = 0; i < quant_linhas; i++)
        p[i] = (int *) malloc(quant_colunas * sizeof(int));
    for(int i = 0; i < quant_linhas; i++){
        for(int j = 0;j < quant_colunas; j++){
            printf("Digite o valor para a posicao %d %d: ",i,j);
            scanf("%d", &p[i][j]);
        }
    }  
    for(int i = 0; i < quant_linhas; i++){
        for(int j = 0;j < quant_colunas; j++){
            if(p[i][j] % 2 == 1 && p[i][j] % 7 == 0){
                cont++;
            }
        }
    }
    array = (int *) malloc(cont * sizeof(int *));
    for(int i = 0; i < quant_linhas; i++){
        for(int j = 0;j < quant_colunas; j++){
            if(p[i][j] % 2 == 1 && p[i][j] % 7 == 0){
                array[k] = p[i][j];
                k++;
            }
        }
    }
    printf("\nElementos da matriz que sao impares e multiplos de 7\n");
    for(int i = 0; i < cont; i++){
        printf("%d\n", array[i]);
    }
    return 0;
}