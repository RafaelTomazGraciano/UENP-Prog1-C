/*Faca um programa que leia uma matriz de ordem 3 x 5 e calcule a soma dos elementos de
cada coluna da matriz, armazenando os resultados em um vetor. Depois, o programa deve
exibir o vetor resultante.*/

#include <stdio.h>

int main(){
  int matriz[3][5], soma = 0, vetor[5];
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 5; j++){
      printf("Digite o valor da posicao [%d %d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
  for(int j = 0; j < 5; j++){
    for(int i = 0; i < 3; i++){
      soma += matriz[i][j]; 
    }
    vetor[j] = soma;
    soma = 0;
  }
  for(int j = 0; j < 5; j++)
    printf(" %d", vetor[j]);
  return 0;
}