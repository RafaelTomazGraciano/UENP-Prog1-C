/*Implemente um programa que leia uma matriz de inteiros alocada dinamicamente com
dimensoes definidas pelo usuario. Em seguida, implemente uma funcao responsavel por
buscar um numero n na matriz. A funcao deve retornar 1, caso encontre n na matriz ou 0,
caso contrario. O prototipo da funcao e a seguinte:

int buscaNumero(int numero, int **array, int linha, int coluna) {..}*/

#include <stdio.h>
#include <stdlib.h>

int buscaNumero(int numero, int **array, int linha, int coluna){
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            if(array[i][j] == numero)
                return 1;
        }
    }
    return 0;
}

int main(){
    int quant_linhas, quant_colunas, n;
    printf("Digite a quantidade linhas que a matriz tera: ");
    scanf("%d", &quant_linhas);
    printf("Digite a quantidade linhas que a matriz tera: ");
    scanf("%d", &quant_colunas);
    int **matriz = (int **) malloc(quant_linhas * sizeof(int *));
    if(matriz == NULL){
        printf("Erro: memoria insuficiente.");
        exit(1);
    }
    for(int i = 0; i < quant_linhas; i++){
        matriz[i] = (int *) malloc(quant_colunas * sizeof(int));
        if(matriz == NULL){
            printf("Erro: memoria insuficiente.");
            exit(1);
        }
    }
    for(int i = 0; i < quant_linhas; i++){
        for(int j =0; j < quant_colunas; j++){
            printf("Digite o valor para a posicao %d %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\nDigite um numero, verificarei se ele esta na matriz: ");
    scanf("%d", &n);
    if(buscaNumero(n, matriz, quant_linhas, quant_colunas))
        printf("\nO numero esta presente na matriz!");
    else
        printf("O numero nao esta presente na matriz!");
    return 0;
}