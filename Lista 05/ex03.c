/*Faca um programa que leia 50 numeros inteiros e armazene em um vetor. Em seguida,
armazene os numeros pares no vetor chamado par e os numeros ımpares no vetor ımpar.
Imprima os dois vetores resultante.*/

#include <stdio.h>
[]
#define TAM 50

int main(){
  int vetor[TAM], vetorpar[TAM], vetorimpar[TAM], k = 0, l = 0;
  for(int i = 0; i < TAM; i++){
    printf("Digite o numero da posicao %d: ", i);
    scanf("%d", &vetor[i]);
    if(vetor[i] % 2 == 0){
      vetorpar[k] = vetor[i];
      k++;
    }
    else{
      vetorimpar[l] = vetor[i];
      l++;
    }
  }
    printf("\nNumeros pares");
  for(int i = 0; i < k; i++){
    printf("\n%d", vetorpar[i]);
  }
  printf("\nNumeros impares");
  for(int i = 0; i < k; i++){
    printf("\n%d", vetorimpar[i]);
  }
  return 0;
}