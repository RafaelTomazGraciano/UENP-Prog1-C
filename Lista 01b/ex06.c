/*Implemente um programa em C que leia o numero de um funcionario, seu numero de horas
trabalhadas, o valor que recebe por hora e calcula o salario desse funcionario. A seguir,
mostre o numero e o salario do funcionario.*/

#include <stdio.h>

int main()
{
    float valorHora;
    int numeroFuncionario, numeroHoras;
     printf("Digite o numero do funcionario: ");
     scanf("%i", &numeroFuncionario);
     printf("Digite a quantidade de horas trabalhadas: ");
     scanf("%i", &numeroHoras);
     printf("Digite o valor recebido por hora: ");
     scanf("%f", &valorHora);
     printf("\n O funcionario de numero %i recebe R$%.2f ", numeroFuncionario, numeroHoras*valorHora);
    return 0;
}