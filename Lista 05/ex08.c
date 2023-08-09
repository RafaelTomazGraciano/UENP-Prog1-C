/*Faca um programa que receba a idade de varias pessoas e armazene em um vetor, em seguida,
contabilize e mostre o total de pessoas com menos de 18 anos e o total com mais de 30
anos. O programa deve ser encerrado quando for digitado o valor 0.*/

#include <stdio.h>

int main(){
  int n, menor18 = 0, maior30 = 0;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);
  int vetor[n];
  for(int i = 0; i < n; i++){
    printf("Digite o valor da posicao %d ou digite 0 caso deseje encerrar\n", i);
    scanf("%d", &vetor[i]);
    if(vetor[i] == 0){
      return 0;
    }
    if(vetor[i] < 18){
      menor18++;
    }
    if(vetor[i] > 30){
      maior30++;
    }
  }
  printf("\nTotal de pessoas com menos de 18 anos: %d", menor18);
  printf("\nTotal de Pessoas com mais de 30 anos: %d", maior30);
  return 0;
}