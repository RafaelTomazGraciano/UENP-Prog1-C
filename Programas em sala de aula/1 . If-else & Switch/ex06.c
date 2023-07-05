/*programa que recebe o salario de um funcionario e aplica aumento, sendo escalonado de  acordo com a tabela abaixo
salario                        aumento
salario<=1000                  15%
1000<salario>=2000             10%
2000<salario                   5% */

#include <stdio.h>

int main()
{
    float salario;
    printf("Digite o valor do seu salario: ");
    scanf("%f", &salario);
    if(salario<=1000){
        printf("\nO seu salario com o aumento sera: %.2f", salario*1.15);
    }
    else if(salario>1000 && salario<=2000){
        printf("\nO seu salario com o aumento sera: %.2f", salario*1.1);
    }
    else{
        printf("\nO seu salario com o aumeto sera: %.2f", salario*1.05);
    }
    return 0;
}