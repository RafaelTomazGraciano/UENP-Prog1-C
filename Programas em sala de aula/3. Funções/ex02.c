/*Funcao que recebe um numero e retorne verdadeiro, caso seja negativo, ou falso, caso contrario*/

#include <stdio.h>

int retorne()
{
  int numero;
  printf("Digite um numero: ");
  scanf("%d", &numero);
  return (numero > 0)? 1 : 0;
}

int main(){
    switch(retorne()){
      case 1: 
      printf("Positivo");
      break;
      case 0:
      printf("Negativo");
      break;
    }
  
  return 0;
}
