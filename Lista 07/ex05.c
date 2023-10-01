/*Faca um programa que leia uma string e, em seguida, implemente uma funcao que contabiliza
a quantidade de vogais contidas na string. Lembre-se que as vogais podem estar em
maiusculas e/ou minusculas.*/

#include <stdio.h>

int vogal(char string[]){
  int count = 0;
  char vogais[] = "aeiouAEIOU";
  for(int i = 0; string[i] != '\0'; i++){
    for(int j = 0; vogais[j] != '\0'; j++){
      if(string[i] == vogais[j]){
        count++;
      }
    }
  }
  return count;
}

int main(){
  char string[100];
  printf("Digite uma frase: ");
  gets(string);
  printf("Numero de vogais digitadas: %d", vogal(string));
  return 0;
}