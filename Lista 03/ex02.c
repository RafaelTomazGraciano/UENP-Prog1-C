/*Faça um programa que receba 2 números inteiros quaisquer representados por x e y e
mostre, em ordem crescente, todos os números entre x e y cujo resto da divisão deles por
5 for igual a 2 ou igual a 3.*/

#include <stdio.h>

int main()
{
  int x,y;
  printf("Digite o valor de inicio: ");
  scanf("%d",&x);
  printf("Digite o valor do fim: ");
  scanf("%d",&y);
  while(x <= y){
    if(x % 5 == 2 || x % 5 == 3){
      printf("\n%d", x);
    }
    x++;
  }
   return 0;
}