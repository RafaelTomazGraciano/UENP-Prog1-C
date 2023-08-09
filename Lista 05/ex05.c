/*Faca um programa em leia uma sequencia de numeros e armazene em um vetor. Em
seguida, determine e mostre quantos numeros lidos estao dentro do intervalo entre 10 e 50.
O programa deve ser encerrado quando for lido o numero -1.*/

#include <stdio.h>

int main(){
  int n, contador = 0;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);
  int vetor[n];
  for(int i = 0; i < n; i++){
    printf("Digite o valor da posicao %d ou digite -1 para encerrar\n", i);
    scanf("%d", &vetor[i]);
    if(vetor[i] == -1){
      return 0;
    }
  }
  for(int i = 0; i < n; i++){
    if(vetor[i] >= 10 && vetor[i] <= 50){
      contador++;
    }
  }
  printf("Existem %d numeros entre 10 e 50", contador);
  return 0;
}