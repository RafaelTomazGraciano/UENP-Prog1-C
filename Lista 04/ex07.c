/*Faca um programa que determine e mostre os 50 primeiros numeros multiplos de 3 considerando
numeros maiores que 0.*/

#include <stdio.h>

int main()
{
  for(int x = 0; x < 50; x++){
    if(x % 3 == 0){
      printf("\n%d", x);
    }
  }
  return 0;
}