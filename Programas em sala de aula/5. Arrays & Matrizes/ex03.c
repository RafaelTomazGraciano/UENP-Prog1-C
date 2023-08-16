/*Usuario define a matriz, coloca as notas, e depois mostre os 
valores multiplicados por 5, e tambem as medias das notas*/

#include <stdio.h>

int main(){
  int lin, col;
  float soma = 0, media = 0;
  printf("Digite o tamanho da matriz. Linhas e colunas\n");
  scanf("%d%d", &lin, &col);
  float notas[lin][col];
  for(int i = 0; i <lin; i++){
    for(int j = 0; j < col; j++){
      printf("Entre com a nota [%d %d]: ",i,j);
      scanf("%f",&notas[i][j]);
    }
  }
  printf("\nNotas\n");
  for(int i = 0; i <lin; i++){
    for(int j = 0; j < col; j++){
      printf(" %.2f", notas[i][j]);
    }
    printf("\n");
  }
  printf("\nNotas multiplicadas por 5\n");
  for(int i = 0; i <lin; i++){
    for(int j = 0; j < col; j++){
      printf(" %.2f", notas[i][j]*5);
    }
    printf("\n");
  }
  printf("\nMedia Notas\n");
  for(int i = 0; i <lin; i++){
    soma = 0;
    for(int j = 0; j < col; j++){
      soma += notas[i][j];
      media = soma/(j+1);
    }
    printf("\n");
    printf(" %.2f", media);
  }
  return 0;
}