/*Na semana do dia do trabalhador um resort resolveu dar a seus clientes um desconto de
30% na diaria. O resort, que conta com 45 acomodacoes, almeja dobrar a sua taxa de
ocupacao que hoje  ́e de 35%. Faca um programa que receba a valor normal da diaria,
calcule e mostre, 1) o valor da diaria com desconto, 2) o total arrecadado com o dobro
de ocupacao e diaria com desconto e 3) o total arrecadado com 35% de ocupacao e diaria normal.*/

#include <stdio.h>

int main()
{
    float valorDiaria, ocupacao;
    ocupacao = 45*0.35;

    //Valor da diária com desconto//

    printf("Digite o valor da diaria: R$ ");
    scanf("%f",&valorDiaria);
    printf("\nO valor da diaria com desconto e: R$%.2f ",valorDiaria*0.7);

    //Total arrecadado com o dobro de ocupação e diária com desconto//

    printf("\nO valor arrecadado com o dobro de ocupacoes e a diaria com desconto e: R$%.2f",(valorDiaria*0.7)*(ocupacao*2));
   
    //Total arrecadado com 35% de ocupação e diária normal//

    printf("\nO valor arrecadado com 35 por cento de ocupacao e diaria normal e: R$%.2f",valorDiaria*ocupacao);
    return 0;
}