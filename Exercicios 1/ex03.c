/*Faca um programa que receba um numero interiro 'n' e exiba o resultado da seguinte soma: 
S= 1/n + 2/n-1 + 3/n-2 ... +n/1 */

#include <stdio.h>

int main(){
  int n;
  float soma = 0;
  printf("Digite um numero: ");
  scanf("%d",&n);
  for(int i = 1; n >= 1; i++){
    soma += (float) i/n;
    n--;
  }
  printf("Soma: %.4f", soma);
  return 0;
}