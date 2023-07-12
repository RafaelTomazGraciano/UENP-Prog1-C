/*funcao que receba o raio de um circulo e retorne a sua area*/

#include <stdio.h>
#include <math.h>

float area()
{
  float raio, area;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    area = 3.14*pow(raio, 2);
    return area;
}

int main(){
  printf("%.2f", area());
  return 0;
}