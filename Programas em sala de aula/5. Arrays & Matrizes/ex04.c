/*le duas matrizes e soma criando uma terceira matriz*/

#include <stdio.h>

int main(){
  int lin, col;
  printf("Digite o tamanho da matriz 1. Linhas e colunas\n");
  scanf("%d%d", &lin, &col);
  int matriz1[lin][col];
  for(int i = 0; i <lin; i++){
    for(int j = 0; j < col; j++){
      printf("Entre com a nota [%d %d]: ",i,j);
      scanf("%d",&matriz1[i][j]);
    }
  }
  printf("Digite o tamanho da matriz 2. Linhas e colunas\n");
  scanf("%d%d", &lin, &col);
  int matriz2[lin][col];
  for(int i = 0; i <lin; i++){
    for(int j = 0; j < col; j++){
      printf("Entre com a nota [%d %d]: ",i,j);
      scanf("%d",&matriz2[i][j]);
    }
  }
  int matriz3[lin][col];
  for(int i = 0; i <lin; i++){
    for(int j = 0; j < col; j++){
      matriz3[i][j] = matriz1[i][j]+matriz2[i][j];
    }
  }
  printf("Matriz de soma\n");
  for(int i = 0; i <lin; i++){
    for(int j = 0; j < col; j++){
      printf(" %d", matriz3[i][j]);
    }
    printf("\n");
  }
}