/*Algoritmo utilizado a estrutura Do While que aponte se o numero digitado e impar ou par, para para digite zero*/

#include <stdio.h>

int main()
{
  int num;
  do{
    printf("\nSe quiser parar digite 0\n");
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num%2 == 1){
      printf("\nO numero e impar");
    }
    else{
      printf("\nO numero e par");
    }
  }while(num != 0);
  return 0;
}