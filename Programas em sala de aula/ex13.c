/*Imprimir numeros dentro de um intervalo*/

#include <stdio.h>

int main(){
  int x, y, count;
  scanf("%d%d",&x,&y);
  count = x+1;
  do{
    printf("%d\n", count);
    count++;
  }while(count < y);
  return 0;
}