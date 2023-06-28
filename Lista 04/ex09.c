/*Faca um programa que leia um numero e verifique se ele e primo ou nao.*/

#include <stdio.h>

int main()
{
  int numero, contador, ePrimo = 1;
  printf("Digite um numero: ");
  scanf("%d", &numero);
  if(numero <= 1){
    ePrimo = 0;
  }
    else{
      for(contador = 2; contador <= numero/2; contador++){
        if(numero % contador == 0){
          ePrimo = 0;
        }
      }
    }
    if(ePrimo == 0){
      printf("\n O %d nao e um numero primo.", numero);
    }
    else{
      printf("\n O %d e um numero primo.", numero);
    }
}