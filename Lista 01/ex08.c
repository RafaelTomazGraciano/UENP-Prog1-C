/*Faca um algoritmo que recebe o salario-base de um funcionario, calcule e mostre seu salario
a receber, sabendo-se que ele tem gratificacao de R$ 50,00 e paga imposto de 12% sobre o
salario-base.*/

#include <stdio.h>

int main()
{
    float salario;
    printf("Insira o valor do seu salario salario-base: R$ ");
    scanf("%f",&salario);
    printf("O seu salario a receber e: R$%.2f",salario*0.88+50.00);
    return 0;
}