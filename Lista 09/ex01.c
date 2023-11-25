/*Dada a estrutura a seguir representando as coordenadas de um ponto no sistema cartesiano.
Implemente uma funcao que, dado dois pontos fornecidos pelo usuario, calcule a distancia
entre eles.
    struct Ponto{
    float x;
    float y;
    };
O calculo da distancia entre dois pontos e dado por:
    distancia = sqrt(x1-x2)^2+(y1+y2)^2*/

#include <stdio.h>
#include <math.h>

struct Ponto{
    float x;
    float y;
    };

float distancia(struct Ponto x1,struct Ponto x2){
    float dist;
    dist = sqrt(pow(x1.x-x2.x,2) + pow(x1.y-x2.y,2));
    return dist;
}

int main(){
    struct Ponto x1, x2;
    printf("Digite o valor de x1: ");
    scanf("%f", &x1.x);
    printf("Digite o valor de y1: ");
    scanf("%f", &x1.y);
    printf("Digite o valor de x2: ");
    scanf("%f", &x2.x);
    printf("Digite o valor de y2: ");
    scanf("%f", &x2.y);
    printf("Distancia: %.2f", distancia(x1,x2));
    return 0;
}

