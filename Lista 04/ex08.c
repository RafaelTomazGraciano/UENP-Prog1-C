/*Faca um programa para calcular e gerar a tabuada dos numeros 1 ao 10.*/

#include <stdio.h>

int main()
{
  int x;
  printf("Digite uo numero que sera gerada a tabuada: ");
  scanf("%d", &x);
  for(int contador = 0; contador <= 10; contador++){
    printf("%d X %d = %d\n", x, contador, x*contador);
  }
  return 0;
}