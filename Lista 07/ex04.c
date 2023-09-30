/*Faca um programa que leia duas strings quaisquer e mostre se as duas sao iguais ou
diferentes no conteudo e se possuem o mesmo tamanho. Lembre-se que as strings podem
conter letras maiusculas e/ou minusculas.*/

#include <stdio.h>
#include <string.h>

int main(){
  char string1[100], string2[100];
  printf("Digite a primeira frase: ");
  gets(string1);
  printf("Digite a segunda frase: ");
  gets(string2);
  if(strlen(string1) == strlen(string2) && strcmp(string1, string2) == 0){
    printf("\nAs frases sao identicas");
  }
  else if(strlen(string1) == strlen(string2) && strcmp(string1, string2) != 0){
    printf("\nAs frases possuem o mesmo tamanho, mas nao possuem o mesmo conteudo");
  }
  else{
    printf("\nAs frases nao tem o mesmo tamanho e nem o mesmo conteudo");
  }
  return 0;
}