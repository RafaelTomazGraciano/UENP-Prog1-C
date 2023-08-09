/*Faca um programa que receba do usuario um vetor de “n” numeros inteiros, em seguida,
implemente uma funcao que determine e retorne o maior valor do vetor lido.*/

#include <stdio.h>

int maior(int v[], int n){
  int m = 0;
  for(int i = 0; i < n; i++){
    if(v[i] > m){
      m = v[i];
    }
  }
  return m;
}

int main(){
  int n, i;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);
  int vetor[n];
  for(i = 0; i < n; i++){
    printf("Digite o valor da posicao %d: ", i);
    scanf("%d", &vetor[i]);
  }
  printf("O maior numero e %d", maior(vetor, n));
  return 0;
}