/*Faca um programa que receba as coordenadas de dois pontos (A e B) no plano cartesiano,
calcule e mostre distancia entre esses dois pontos. Para calcular da distancia (d) entre dois
pontos (A e B), temos:*/

#include <stdio.h>
#include <math.h>

int main()
{
    float d, xa, xb, ya, yb;
    printf("Digite a coordenada x do ponto a :");
    scanf("%f",&xa);
    printf("Digite a coordenda y do ponto a: ");
    scanf("%f",&ya);
    printf("Digite a coordenada x no ponto b: ");
    scanf("%f",&xb);
    printf("Digite a coordenada y no ponto b: ");
    scanf("%f",&yb);
    d=sqrt(pow((xb-xa),2)+pow((yb-ya),2));
    printf("A distancia entre A e B e: %.2f",d);
    return 0;
    printf
}