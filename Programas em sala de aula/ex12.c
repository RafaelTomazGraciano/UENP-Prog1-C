/*Programa que gere a tabuada de um numero "n", fornecido pelo usuario*/

#include <stdio.h>

int main()
{
  int n, contador = 0;
  printf("Digite o numero que sera multiplicado: ");
  scanf("%d", &n);
  while( contador <= 10){
    printf("%d X %d = %d\n", n , contador, (n*contador));
    contador++;
  }
  return 0;
}