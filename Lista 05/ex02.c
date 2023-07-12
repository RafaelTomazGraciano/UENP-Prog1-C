/*Faca uma funcao que receba como parametro um numero inteiro e verifique se este e primo
ou nao.*/

#include <stdio.h>

int primo(int numero){
  int primo = 0;
  for(int contador = 1; contador <= numero; contador++){
    if(numero % contador == 0){
      primo ++;
    }
  }
  return (primo == 2)? 1 : 0;
}

int main()
{ 
  int numero;
  printf("Digite um numero: ");
  scanf("%d",&numero);
  switch(primo(numero)){
    case 1:
    printf("O numero e primo");
    break;
    case 0:
    printf("O numero nao e primo");
  }
  return 0;
}