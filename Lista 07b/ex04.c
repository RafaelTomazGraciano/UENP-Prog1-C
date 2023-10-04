/*Faca um programa que leia o nome e o valor de determinada mercadoria de uma loja.
Sabendo que o desconto para pagamento a vista e de 10% sobre o valor total, calcule o
valor a ser pago a vista. Escreva o nome da mercadoria, o valor total, o valor do desconto
e o valor a ser pago a vista.*/

#include <stdio.h>

int main(){
  char string[100];
  float valor;
  printf("Digite o nome do produto: ");
  gets(string);
  printf("Digite o valor do produto: ");
  scanf("%f",&valor);
  printf("\nNome do produto: %s", string);
  printf("\nValor total: %.2f", valor);
  printf("\nValor do desconto: %.2f", 0.1*valor);
  printf("\nValor a ser pago a vitsta: %.2f", valor*0.9);
  return 0;
}