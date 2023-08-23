/*Faca um programa que receba uma matriz de inteiros de ordem 5 x 3 e verifique quais os
elementos da matriz sao multiplos de 3, armazenando esses elementos em um vetor. Depois,
o programa deve exibir o vetor resultante.*/

#include <stdio.h>

int main(){
  int matriz[5][3], multiplos3 = 0, k = 0;
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 3; j++){
      printf("Digite o valor da posicao [%d %d]: ", i, j);
      scanf("%d", &matriz[i][j]);
      if(matriz[i][j] % 3 == 0){
        multiplos3++;
      }
    }
  }
  int vetor[multiplos3];
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 3; j++){
      if(matriz[i][j] % 3 == 0){
        vetor[k] = matriz[i][j];
        k++;
      }
    }
  }
  printf("\nNumeros multiplos de 3\n");
  for(int i = 0; i < multiplos3; i++){
    printf(" %d", vetor[i]);
  }
  return 0;
}