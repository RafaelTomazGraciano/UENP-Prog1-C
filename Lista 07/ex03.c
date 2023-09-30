/*Faca um programa que leia uma string informada pelo usuario e, em seguida, implemente
uma funcao que contabilize a quantidade de espacos em branco existente na string lida.*/

# include <stdio.h>
#include <string.h>

int espaco(char string[]){
  int espacoBranco = 0;
  for(int i = 0; i < strlen(string); i++){
    if(string[i] == ' '){
      espacoBranco++;
    }
  }
  return espacoBranco;
}

int main(){
  char string[100];
  printf("Digite uma frase: ");
  gets(string);
  printf("Existem %d espacos em branco.", espaco(string));
  return 0;
}