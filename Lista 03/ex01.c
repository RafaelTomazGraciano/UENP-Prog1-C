/*Faça um programa que receba dois números inteiros representando o intervalo (inicio) e
(fim) de uma sequência, e depois imprima todos os números ́ımpares dentro deste intervalo.*/

#include <stdio.h>

int main()
{
  int inicio, fim;
  printf("Digite o valor que representa o inicio: ");
  scanf("%d", &inicio);
  printf("Digite o valor que representa o fim: ");
  scanf("%d", &fim);
  while(inicio <= fim){
    if(inicio % 2 == 1){
      printf("\n%d", inicio);
    }
    inicio++;
  }
  return 0;
}