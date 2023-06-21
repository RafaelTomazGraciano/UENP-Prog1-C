/*Algoritmo utilizado a estrutura Do While que aponte se o numero digitado e impar ou par, para para digite zero*/

#include <stdio.h>

int main()
{
  int num;
  do{
    printf("Digite um numero ou 0 para sair: ");
    scanf("%d", &num);
    if(num & 1){
      printf("\nO numero e impar");
    }
    else{
      printf("\nO numero e par");
    }
  }while(num != 0);
  return 0;
}