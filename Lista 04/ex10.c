/*Faca um programa que leia uma sequencia de numeros inteiros e mostre quantos numeros
multiplos de 7 foram digitados no intervalo entre 10 e 50, bem como a media desses numeros.
O programa deve ser encerrado quando for digitado o valor 0.*/

#include <stdio.h>

int main(){
  int numero, multiplo7 = 0, i = 1;
  float soma = 0, media = 0;
  do{
    printf("\n Digite um numero ou digite 0 caso deseje encerrar o programa. \n");
    scanf("%d", &numero);
    if(numero >= 10 && numero <= 50 && numero % 7 == 0){
      multiplo7++;
    }
    if(numero != 0){
      soma += numero;
      media = soma/i;
      i++;
    }
  }while( numero != 0);
  printf("\n A quantidade de numeros multiplos de 7 entre o intervalo de 10 e 50 e: %d", multiplo7);
  printf("\n A media dos numero digitados e: %.2f",  media);
  return 0;
}