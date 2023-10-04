/*Faca um programa que leia uma matriz de 5 strings e imprima cada uma delas. Depois,
peca para o usuario digitar mais uma string e verifique se ela esta na matriz, caso esteja
indique em que linha ela se encontra. (SEM USAR STRING.H)*/

#include <stdio.h>

int FimStringMatriz(char s1[5][100], int linha){
  for(int coluna = 0; coluna < 100; coluna++){
    if(s1[linha][coluna] == '\0'){
      return coluna;
      break;
    }
  } 
  return 0;
}

int FimString(char string[100]){
  for(int coluna = 0; coluna < 100; coluna++){
    if(string[coluna] == '\0'){
      return coluna;
      break;
    }
  }
  return 0;
}


int main(){
  char string1[5][100], string2[100];
  int equal;
  for(int i = 0; i < 5; i++){
    printf("Digite a string %d: ", i);
    fgets(string1[i], 100, stdin);
    setbuf(stdin, NULL);
  }
  printf("Digite a string para compracao: ");
  fgets(string2, 100, stdin);
  setbuf(stdin, NULL);
  for(int linha = 0; linha < 100; linha++){
    equal = 0;
    if(FimStringMatriz(string1, linha) == FimString(string2)){
      equal = 1;
      for(int coluna = 0; coluna < FimString(string2); coluna++){
        if(string1[linha][coluna] != string2[coluna]){
          equal = 0;
          break;
        }
      }
    }
    if(equal){
      printf("\nA frase e igual na linha %d", linha);
    }
  }
  return 0;
}