/*Faca um programa que inverta uma string lida. Por exemplo, se a string digitada for
programar em linguagem C, o resultado deve ser C megaugnil me ramargorp.*/

#include <stdio.h>
#include <string.h>

int main(){
  int aux, j = 0, tam;
  char string[100], string2[100];
  printf("Digite uma frase: ");
  gets(string);
  printf("Frase invertida: %s", strrev(string));
  return 0;
}