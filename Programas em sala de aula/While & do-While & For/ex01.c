/*imprimir numeros inteiros dentro de um intervalo*/

#include <stdio.h>

int main()
{
  int x, y, count;
  printf("Digite o primeiro valor: ");
  scanf("%d", &x);
  printf("Digite o segundo valor: ");
  scanf("%d", &y);
  count = x+1;
  while(count < y){
    printf("\n%d", count);
    count++;
  }
  return 0;
}