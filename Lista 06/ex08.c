/*Faca um programa que leia uma matriz quadrada de tamanho qualquer, calcule e mostre
por meio de uma funcao, a soma dos elementos que nao pertencem a nenhuma das diagonais
– principal e secundaria.*/

#include <stdio.h>

int soma(int n, int matriz[][n]){
  int soma = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i != j && i+j != n-1){
        soma += matriz[i][j];
      }
    }
  }
  return soma;
}

int main(){
  int n;
  printf("Digite o tamanho de uma matriz quadrada: ");
  scanf("%d", &n);
  int matriz[n][n];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("Digite o valor da posicao [%d %d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
  printf("Resultado: %d", soma(n, matriz));
  return 0;
}