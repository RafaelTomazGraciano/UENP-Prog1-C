/*Faca um programa que leia uma sequencia de numeros qualquer e armazene em um vetor,
em seguida, implemente uma funcao que contabilize e retorne o total de ocorrencias do
ultimo numero lido desta sequencia.*/

#include <stdio.h>

int vetor(){
  int i = 0, v[i];
  char resposta;
  do{
  printf("Digite um numero: ");
  scanf("%d", &v[i]);
  printf("Deseja continuar? [S/N]\n");
  scanf(" %c", &resposta);
  i++;
  }while(resposta == 's' || resposta == 'S');
  return i;
}

int main(){
  printf("Numero de ocorrencias: %d", vetor());
  return 0;
}