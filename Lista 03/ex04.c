/*Faca um programa para calcular as raızes da equacao de segundo grau. O programa recebe
como entrada os numeros a, b, c, que correspondem aos coeficientes da equacao de segundo
grau (ax² + bx + c = 0). Em seguida, o programa deve mostrar as raızes da equacao.
Caso as raızes nao existam, uma mensagem deve ser exibida (por exemplo, “Nao existem
raızes reais”). Caso a equacao nao seja de segundo grau, uma mensagem tambem deve ser
exibida (por exemplo, “Nao e uma equacao de segundo grau”).*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x, x1, x2;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    x = (b*b)-4*a*c;

    if(x > 0){
        x1 = (-b-sqrt(x))/2*a;
        x2 = (-b+sqrt(x))/2*a;
        printf("\n As raizes sao: %.2f e %.2f",x1, x2);
    }
    else if(x == 0){
        x1 = (-b-sqrt(x))/2*a;
        printf("A raiz e: %.2f",x1);
    }
    else if (x < 0){
        printf("Nao existem raizes reais");
    }
    else{
        printf("Nao e uma equacao de segundo grau");
    }
    return 0;
}