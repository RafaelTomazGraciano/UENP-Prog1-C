/*Faca um programa que leia uma sequencia de numeros inteiros e armazene em um vetor.
Em seguida, implemente uma funcao que determine e mostre os numeros do vetor que sao
multiplos de 7.*/

#include <stdio.h>

int main(){
  int n;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);
  int vetor[n];
  for(int i = 0; i < n; i++){
    printf("Digite o numero da posicao %d: ", i);
    scanf("%d", &vetor[i]);
  }
  printf("Numeros multiplos de 7");
  for(int i = 0; i < n; i++){
    if(vetor[i] % 7 == 0){
      printf("\n%d", vetor[i]);
    }
  }
  return 0;
}