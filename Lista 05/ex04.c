/*Faca um programa que calcule a potencia de um numero qualquer fornecido pelo usuario.
Para isso, implemente uma funcao que receba como parametro dois numeros inteiros x e n,
calcule e retorne para o programa principal o resultado de x^n.
NAO USE nenhuma funcao pronta (ou seja, pow()).*/

#include <stdio.h>

int potencia(int x, int n){
  int resultado = 1;
  for(int contador = 1; contador <= n; contador++){
    resultado = resultado * x;
  }
  return resultado;
}

int main(){
  int x, n;
  printf("Digite o numero da base da potencia: ");
  scanf("%d", &x);
  printf("Digite numero do expoente da potencia: ");
  scanf("%d", &n);
  printf("Resultado: %d", potencia(x,n));
  return 0;
}