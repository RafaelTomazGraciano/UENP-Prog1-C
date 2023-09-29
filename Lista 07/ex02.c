/*Faca um programa para criptografar uma string qualquer informada pelo usuario, substituindo
cada letra da string pela letra do alfabeto em sua respectiva posicao, mas de tras para frente.
Por exemplo, se a string digitada for adoro programar em c a saıda deve ser zwlil kiltiznzi
vn x.*/

#include <stdio.h>
#include <string.h>

int main(){
  char string[100], stringcripto[100], alfabeto[27] = "abcdefghijklmnopqrstuvwxyz", invertalfabeto[27];
  printf("Digite uma frase: ");
  gets(string);
  strcpy(invertalfabeto, alfabeto);
  strrev(invertalfabeto); 
  strcpy(stringcripto, string);
  for(int i = 0; i < 100; i++){
    for(int j = 0; j < 27; j++){
      if(string[i] == alfabeto[j]){
        stringcripto[i] = invertalfabeto[j];
      }
    }
  }
  printf("Frase criptografada: %s", stringcripto);
  return 0;
}