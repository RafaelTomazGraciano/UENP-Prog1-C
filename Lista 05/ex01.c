/*Faca uma funcao para calcular a area de “n” terrenos retangulares, em que “n” e informado
pelo usuario. O programa recebe como entrada o comprimento e a largura de cada terreno
e, ao final, exibe a sua area correspondente.*/

#include <stdio.h>

float area(){
  int n;
  float comprimento, largura, area;
  printf("Digite a quantidade de terrenos: ");
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    printf("\nDigite o comprimento: ");
    scanf("%f", &comprimento);
    printf("Digite a largura: ");
    scanf("%f", & largura);
    area = comprimento * largura;
    printf("Area: %.2f", area);
  }
}

int main()
{
  area();
  return 0;
}