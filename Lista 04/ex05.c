/*Faça um programa que receba uma quantidade de números inteiros, em seguida calcule e
mostre a sua média. A quantidade de números deve ser fornecida pelo usuário.*/

#include <stdio.h>

int main(){
  int numeros, i = 0;
  float soma, media;
  char resposta;
  do{
    printf("Digite o numero: ");
    scanf("%d", &numeros);
    soma += numeros;
    i++;
    media = soma/i;
    printf("Deseja continuar? [S/N]\n");
    fflush(stdin);
    scanf("%c", &resposta);
  }while(resposta == 's' || resposta == 'S');
  printf("\n A Media e %.2f", media);
  return 0;
}