/*Usuario define a matriz, coloca as notas, e mostra, e depois mostra o valores multiplicados por 5*/

#include <stdio.h>

int main(){
  int lin, col;
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
  return 0;
}