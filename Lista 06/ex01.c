/*Faca um programa que leia uma matriz de ordem 5 x 3, calcule e mostre a soma de cada
linha da matriz.*/

#include <stdio.h>

int main(){
  int matriz[5][3], soma = 0;
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 3; j++){
      printf("Digite o valor da posicao [%d %d]: ",i,j);
      scanf("%d", &matriz[i][j]);
      soma += matriz[i][j];
    }
    printf("\nResultado da linha %d: %d\n", i, soma);
    soma = 0;
  }
  return 0;
}