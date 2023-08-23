/*Faca um programa que leia uma matriz quadrada com valores inteiros com dimensao
definida pelo usuario, leia uma constante x e, atraves de uma funcao, multiplique os
elementos da diagonal secundaria da matriz com essa constante. Ao final, o programa
deve exibir a matriz resultante.*/

#include <stdio.h>

void matriz2(int n, int x, int matriz[][n]){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){ 
      if(i + j == n-1){
        printf(" %d", matriz[i][j]*x);
      }
    }
  }

}

int main(){
  int n, x;
  printf("Digite o valor da ordem da matriz quadrada: ");
  scanf("%d", &n);
  int matriz[n][n];
  printf("Digite o valor da constante x: ");
  scanf("%d", &x);
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("Digite o valor da posicao [%d %d]: ", i ,j);
      scanf("%d", &matriz[i][j]);
    }
  }
  matriz2(n, x, matriz);
  return 0;
}