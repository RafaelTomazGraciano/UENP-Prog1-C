/*Faca uma funcao para calcular a area de “n” terrenos retangulares, em que “n” e informado
pelo usuario. O programa recebe como entrada o comprimento e a largura de cada terreno
e, ao final, exibe a sua area correspondente.*/

#include <stdio.h>

float area(float comprimento, float largura, int n){
  float area;
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
  int n;
  float comprimento, largura;
  printf("Digite a quantidade de terrenos: ");
  scanf("%d", &n);
  area(comprimento, largura, n);
  return 0;
}