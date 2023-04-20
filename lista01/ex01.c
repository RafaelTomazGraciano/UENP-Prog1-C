/*Faca um programa que leia o raio de uma cırculo, calcule e mostre o seu perımetro (p) e
sua  ́area (a).*/

#include <stdio.h>
#include <math.h>
int main()
{
    float raio, perimetro, area, pi=3.14;
    printf("Digite o raio:");
    scanf("%f",&raio);
    perimetro = 2*pi*raio;
    area = pi*pow(raio,2);
    printf("\nperimetro: %.2f",perimetro);
    printf("\narea: %.2f",area);
    return 0;
}