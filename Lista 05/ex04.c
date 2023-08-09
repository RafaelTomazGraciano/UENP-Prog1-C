/*Faca um programa que leia uma sequencia de 21 numeros inteiros e armazene em um vetor.
Depois, determine se o ultimo numero lido esta presente nos 20 primeiros e mostre as
posicoes do vetor em que ele se encontra.*/

#include <stdio.h>

int main(){
  int vetor[21];
  for(int i = 0; i < 21; i++){
    printf("Digite o numero da posicao %d: ", i);
    scanf("%d", &vetor[i]);
  }
  for(int i = 0; i < 20; i++){
    if(vetor[20] == vetor[i]){
      printf("\n %d e igual ao numero da posicao %d", vetor[20],i);
    }
  }
return 0;
}