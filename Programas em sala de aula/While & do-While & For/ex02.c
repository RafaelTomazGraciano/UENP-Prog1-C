/*Calcula fatorial*/

#include <stdio.h>

int main()
{
  int fat, n;
  printf("Digite um numero: ");
  scanf("%d", &n);
  fat = 1;
  while(n > 1){
    fat *= n;
    n--;
  }
  printf("\n%d", fat);
  return 0;
}