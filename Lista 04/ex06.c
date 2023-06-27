/*Faca um programa que receba a idade de varias pessoas, contabilize e mostre o total de pessoas
com menos de 18 anos e o total com mais de 30 anos. O programa deve ser encerrado
quando for digitado o valor 0.*/

#include <stdio.h>

int main()
{
  int idade, totalMenos18 = 0, totalMais30 = 0;
  do{
    printf("Digite o valor da idade da pessoa. Ou digite 0 caso deseje encerrar.\n");
    scanf("%d", &idade);
    if(idade < 18 && idade != 0 ){
      totalMenos18++;
    }
    if(idade >= 30){
      totalMais30++;
    }
  }while(idade != 0);
  printf("\n O total de pessoas com menos de 18 anos e: %d", totalMenos18);
  printf("\n O total de pessoas com mais de 30 anos e: %d", totalMais30);
  return 0;
}