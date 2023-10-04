/*Faca um progrma que leia uma string de tamanho qualquer, em seguida, leia um caractere
e mostre as posicoes (ındices) de onde ocorre o caractere na string. Caso nao haja mais
nenhuma ocorrencia do caractere na string, deve ser impresso o valor -1.*/

#include<stdio.h>

int main(){
  char caractere;
  int n;
  printf("Digite o tamanho da string: ");
  scanf("%d", &n);
  setbuf(stdin, NULL);
  char string[n];
  printf("Digite uma frase: ");
  fgets(string, n, stdin); // usando fgets
  setbuf(stdin, NULL);
  printf("Digite um caractere: ");
  scanf("%c", &caractere);
  for(int i = 0; string[i] != '\0'; i++){
    if(caractere == string[i]){
      printf("\n ocorrencia do caractere na string no indice %d", i);
    }  
  }
  printf("\n-1");
  return 0; 
}