/*Uma agencia bancaria decidiu conceder um credito especial aos seus clientes de acordo com
o saldo medio no ultimo ano. Faca um programa que receba o saldo medio de um cliente e
calcule o valor do credito, com base na tabela a seguir.

Saldo Medio                                             Valor do Credito
R$400,00 < saldo medio                                 30% do saldo medio
R$ 300,00 < saldo medio ≤ R$ 400,00                    25% do saldo medio
R$ 200,00 < saldo medio ≤ R$ 300,00                    20% do saldo medio
saldo medio ≤ R$ 200,00                                10% do saldo medio       */

#include <stdio.h>

int main()
{
    float saldoMedio;
    printf("Digite o valor do seu Saldo Medio: ");
    scanf("%f", &saldoMedio);

    if(saldoMedio > 400){
        printf("O valor do seu credito e %.2f", saldoMedio*0.3);
    }
    else if(saldoMedio > 300 && saldoMedio <= 400){
        printf("O valor do seu credito e %.2f", saldoMedio*0.25);
    }
    else if(saldoMedio > 200 && saldoMedio <= 300){
        printf("O valor do seu credito e %.2f", saldoMedio*0.2);
    }
    else{
        printf(" O valor do seu credito e %.2f", saldoMedio*0.1);
    }
    return 0;
}