/*fatorial*/

#include <stdio.h>

int main(){
  int numero, resultado = 1;
  scanf("%d",&numero);
  for(int i = 1; i <= numero; i++){
    resultado = resultado*i;
  }
  printf("%d\n", resultado);
  return 0;
}