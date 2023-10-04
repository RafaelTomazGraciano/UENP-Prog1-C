/*Faca um programa para criptografar uma string qualquer informada pelo usuario, substituindo
as vogais encontradas na string pelo caractere especial asterisco (*).*/

#include <stdio.h>
#include <string.h>

int main(){
  char string1[100], string2[100];
  printf("Digite uma frase: ");
  gets(string1);
  strcpy(string2, string1);
  for(int i = 0; string1[i] != '\0'; i++){
    if(string1[i] == 'a'|| string1[i] == 'e'|| string1[i] == 'i'|| string1[i] == 'o'|| string1[i] == 'u'){
      string2[i] = '*';
    }
    else{
      string2[i] = string1[i];
    }
  }
  printf("%s", string2);
  return 0;
}