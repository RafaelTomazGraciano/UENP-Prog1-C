/*Faca um programa que inverta uma string lida. Por exemplo, se a string digitada for
programar em linguagem C, o resultado deve ser C megaugnil me ramargorp.*/

#include <stdio.h>
#include <string.h>

int main(){
  char string[100];
  printf("Digite uma frase: ");
  fgets(string, 100, stdin);
  printf("Frase invertida: %s", strrev(string));
  return 0;
}