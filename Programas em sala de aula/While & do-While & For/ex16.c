/*Imprime numeros inteiros dentro de um intervalo*/

#include <stdio.h>

int main()
{
  int x, y, n;
  scanf("%d%d", &x, &y);
  for(n = x+1; n < y; n++){
    printf("\n%d", n);
  }
  return 0;
}