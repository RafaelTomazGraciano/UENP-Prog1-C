/*Faca uma funcao que receba um caractere e verifique se ele e uma vogal ou nao.*/

#include <stdio.h>
#include <ctype.h>

void vogal(){
  char resposta;
  printf("Digite uma letra: ");
  scanf("%c", &resposta);
  tolower (resposta);
  if(resposta == 'a' || resposta == 'e' || resposta == 'i' || resposta == 'o' || resposta == 'u'){
    printf("E uma vogal");
  }
  else{
    printf("Nao e uma vogal");
  }
}

int main(){
  vogal();
  return 0;
}