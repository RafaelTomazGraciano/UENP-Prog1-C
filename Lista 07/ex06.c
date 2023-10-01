/*Faca um programa que leia uma string e um caractere qualquer e, em seguida, implemente
uma funcao que contabilize e retorne o total de ocorrencias desse caractere na string.*/

#include <stdio.h>

int ocorrencia(char string[], char c){
  int count = 0;
  for(int i = 0; string[i] != '\0'; i++){
    if(string[i] == c){
      count++;
    }
  }
  return count;
}

int main(){
  char string[100], caractere;
  printf("Digite uma frase: ");
  gets(string);
  printf("Digite um caractere: ");
  scanf("%c", &caractere);
  printf("Total de ocorrencias do caractere na frase digitada: %d", ocorrencia(string, caractere));
  return 0;
}