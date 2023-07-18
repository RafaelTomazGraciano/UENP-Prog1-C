/*Faca um programa que receba como entrada 3 numeros reais maiores que zero correspondendo
ao comprimento dos lados do triangulo, em seguida, classifique-o em:
1. equilatero (os tres lados de comprimentos iguais)
2. isosceles (dois lados de comprimentos iguais) ou
3. escaleno (os tres lados de comprimentos diferentes)*/

#include <stdio.h>

int main()
{
    float lado1, lado2, lado3;
    printf("Digite um numero positivo para o primeiro lado do traingulo: ");
    scanf("%f", &lado1);
    printf("Digite um numero positivo para o segundo lado do traingulo: ");
    scanf("%f", &lado2);
    printf("Digite um numero positivo para o terceiro lado do traingulo: ");
    scanf("%f", &lado3);

    if(lado1 == lado2 && lado1 == lado3){
        printf("\n Este triangulo e equilatero");
    }
    else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
        printf("\n Este triangulo e isoceles");
    }
    else{
        printf("\n Este triangulo e escaleno");
    }
    return 0;
}