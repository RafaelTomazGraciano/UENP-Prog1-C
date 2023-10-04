/*Faca um programa que leia uma matriz de 5 strings e imprima cada uma delas. Depois,
peca para o usuario digitar mais uma string e verifique se ela esta na matriz, caso esteja
indique em que linha ela se encontra. (SEM USAR STRING.H)*/

#include <stdio.h>

int main(){
  char string1[5][100], string2[100];
  for(int i = 0; i < 5; i++){
    printf("Digite a string %d: ", i);
    fgets(string1[i], 100, stdin);
    setbuf(stdin, NULL);
  }
  printf("Digite a string para compracao: ");
  gets(string2);
  
  return 0;
}