/*Faca um programa que leia uma matriz quadrada com dimensao definida pelo usuario. Em
seguida, implemente uma funcao que calcule e mostre a soma dos elementos que estao acima
da diagonal principal.*/

#include <stdio.h>

int soma(int n, int matriz[][n]){
  int soma = 0;
  for(int i = 0;i < n; i++){
    for(int j = 0;j < n; j++){
      if(j > i){
        soma += matriz[i][j];
      }
    }
  }
  return soma;
}

int main(){
  int n;
  printf("Digite a ordem da matriz quadrada: ");
  scanf("%d", &n);
  int matriz[n][n];
  for(int i = 0; i < n; i++){
    for(int j = 0;j < n; j++){
      printf("Digite o valor da posicao [%d %d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
  printf("Resultado: %d", soma(n, matriz));
  return 0;
}