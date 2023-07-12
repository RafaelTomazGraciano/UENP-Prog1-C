/*Faca uma funcao que receba tres numeros inteiros e retorne o maior deles*/

#include <stdio.h>

int maior(int a, int b)
{
  if (a > b){
    return a;
  }
  else{
    return b;
  }
}

int main(){
  int a, b, c;
  printf("Digite o valor de a: ");
  scanf("%d",&a);
  printf("Digite o valor de b: ");
  scanf("%d",&b);
  printf("Digite o valor de c: ");
  scanf("%d",&c);
  printf("O maior dos valores e %d", maior(maior(a,b),c));
  return 0;
}