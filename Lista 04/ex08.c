/*Faca um programa para calcular e gerar a tabuada dos numeros 1 ao 10.*/

#include <stdio.h>

int main()
{
  int x, contador;
  for(contador = 1; contador <= 10; contador++){
    printf("\n\n Tabuada do %d", contador);
    for(x = 1; x <= 10; x++){
      printf("\n %d X %d = %d\n", contador, x, x*contador);
    }
  }
  return 0;
}