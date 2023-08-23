/*Faca um programa que leia uma matriz de ordem 5 x 5, calcule e mostre a media dos
elementos da diagonal principal.*/

#include <stdio.h>

int main(){
  int matriz[5][5];
  float soma = 0, media = 0;
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      printf("Digite o valor da posicao [%d %d]: ", i, j);
      scanf("%d", &matriz[i][j]);
      if(i == j){
        soma += matriz[i][j];
      }
    }
  }
  media = soma/5;
  printf("\n Resultado: %.2f", media);
  return 0;
}