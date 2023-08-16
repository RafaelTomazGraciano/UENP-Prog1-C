/*Preenchendo matriz*/

#include <stdio.h>

#define LIN 4
#define COL 4

int main(){
  int i, j;
  float notas[LIN][COL];
  //lendo matriz
  for(i=0;i<LIN;i++){
    for(j=0;j<COL;j++){
      printf("Entre com a nota [%d %d]: ",i,j);
      scanf("%f",&notas[i][j]);
    }
  }
  return 0;
}