/*Faca um programa que receba as dimensoes e os elementos de uma matriz, gere e exiba a
sua transposta.*/

#include <stdio.h>

int main(){
  int l, c;
  printf("Digite a quantidade linhas e colunas da matriz\n");
  scanf("%d%d", &l, &c);
  int matriz[l][c];
  for(int i = 0; i < l; i++){
    for(int j = 0; j < c; j++){
      printf("Digite o valor da posicao [%d %d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
  for(int j = 0; j < c; j++){
    for(int i = 0; i < l; i++){
      printf(" %d ", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}