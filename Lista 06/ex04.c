/*Faca um programa que leia uma matriz 4 x 5, determine e mostre atraves de uma funcao
o menor elemento dessa matriz.*/

#include <stdio.h>

int main(){
  int matriz[4][5], menor;
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 5; j++){
      printf("Digite o valor da posicao [%d %d]: ", i, j);
      scanf("%d", &matriz[i][j]);
      menor = matriz[i][j];
      if(matriz[i][j] < menor){
        menor = matriz[i][j];
      }
    }
  }
  printf("\nMenor: %d", menor);
  return 0;
}
