/*calculadora simples*/

#include <stdio.h>

int main()
{
    float x, y;
    char operacao;
    printf("Digite um numero, um operador e outro numero: ");
    scanf("%f %c %f", &x, &operacao, &y);
    //avalia operacao e executa comando correspondente
    switch (operacao) {
        case '+':
        printf("Adicao = %.2f \n", x+y); break;
        case '-':
        printf("Subtracao = %.2f \n", x-y); break;
        case '*':
        printf("Multiplicacao = %.2f \n", x*y ); break;
        case '/':
        printf("Divisao = %.2f", x/y); break;
        default:
        printf("Operador desconhecido");
    }
    return 0;
}