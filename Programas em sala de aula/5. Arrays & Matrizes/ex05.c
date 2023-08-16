/*Faca um programa que armazene dados inteiros em uma matriz e imprima:
Todos os elementos que se encontram em posicoes cuja linha mais coluna formam um numero par*/

#include <stdio.h>

int main(){
  int lin, col;
  printf("Digite o tamanho da matriz. Linhas e colunas\n");
  scanf("%d%d", &lin, &col);
  int matriz[lin][col];
  for(int i = 0; i <lin; i++){
    for(int j = 0; j < col; j++){
      printf("Entre com a nota [%d %d]: ",i,j);
      scanf("%d",&matriz[i][j]);
    }
  }
  printf("\nMatriz\n");
  for(int i = 0; i <lin; i++){
    for(int j = 0; j < col; j++){
      printf(" %d", matriz[i][j]);
    }
    printf("\n");
  }
  printf("\nMatriz onde linhas mais colunas sao iguais a um numero par sao printadas\n");
  for(int i = 0; i <lin; i++){
    for(int j = 0; j < col; j++){
      if((i+j) % 2 == 0){
        printf(" %d", matriz[i][j]);
      }
      else{
        printf("   ");
      }
    }
    printf("\n");
  }
  return 0;
}