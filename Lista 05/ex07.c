/*Faca uma funcao que receba um numero inteiro qualquer, calcule e mostre a tabuada deste
numero.*/

#include <stdio.h>

void tabuada(){
  int numero;
  printf("Digite um numero: ");
  scanf("%d", &numero);
  for(int i = 0; i <= 10; i++){
    printf("%d X %d = %d \n", numero, i, numero*i);
  }
}

int main(){
  tabuada();
  return 0;
}