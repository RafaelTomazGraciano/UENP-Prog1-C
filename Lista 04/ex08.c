/*Faca uma funcao que receba um numero inteiro qualquer, calcule e mostre todos os seus
divisores, bem como a quantidade de divisores existentes.*/

#include <stdio.h>

void divisores(){
  int numero, contador = 0;
  printf("Digite um numero: ");
  scanf("%d", &numero);
  printf("Divisores: ");
  for(int i = 1; i <= numero; i++){
    if(numero % i == 0){
      printf("\n %d", i);
      contador++;
    }
  }
  printf("\nQuantidade de divisores: %d", contador);
}

int main(){
  divisores();
}