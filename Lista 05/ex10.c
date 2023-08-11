/*Faca um programa que receba um vetor de 20 elementos e, em seguida, efetue a troca dos
10 primeiros elementos pelos 10  ́ultimos, exibindo ao final o vetor resultante.*/

#include <stdio.h>

int main(){
  int vetor[20],vetorResultante[20], j = 0;
  for(int i = 0; i < 20; i++){
    printf("Digite o valor da posicao %d: ", i);
    scanf("%d", &vetor[i]);
  }
  for(int i = 10; i < 20; i++){
    vetorResultante[j] = vetor[i];
    j++;
  }
  for(int i = 0; i < 10; i++){
    vetorResultante[j] = vetor[i];
    j++;
  }
  printf("\nResultado");
  for(int i = 0; i < 20; i++){
    printf(" %d", vetorResultante[i]);
  }
}