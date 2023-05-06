/*Uma pequena mercearia resolveu dar descontos para agradar seus clientes. A mercearia
contem apenas 4 itens, cujos precos sao dados pela Tabela 1.
A regra de desconto e bem simples: se a quantidade de produtos comprados for igual ou
maior que  15 itens, entao o desconto e concedido. O desconto tambem e concedido caso o
valor total da compra seja maior ou igual R$ 40,00. O valor do desconto e de 15%.
Faca uma programa que leia o codigo do produto, a quantidade comprada e exiba o valor
que o cliente deve pagar, ja considerando o desconto quando aplicavel. Considere que o
cliente so pode comprar um unico tipo de produto cada vez que usar o seu software.
                      Tabela 1: Precos dos produtos
                Codigo             Preco unitario
                   1               R$ 5,30
                   2               R$ 6,00
                   3               R$ 3,20
                   4               R$ 2,50*/

#include <stdio.h>

int main()
{
    int codigo, quantidade;
    float valor;
    printf("Codigo     |     Preco unitario \n");
    printf("  1        |          R$5,30    \n");
    printf("  2        |          R$6,00    \n");
    printf("  3        |          R$3,20    \n");
    printf("  4        |          R$2,50    \n");
    printf("\n Digite o codigo do produto que deseja comprar: ");
    scanf("%i", &codigo);
    printf("Digite a quantidade de produtos que deseja comprar: ");
    scanf("%i", &quantidade);

    if(quantidade > 0){
        switch(codigo){
            case '1':
                valor = 5.30*quantidade; break;
            case '2':
                valor = 6.00*quantidade; break;
            case '3':
                valor = 3.20*quantidade; break;
            case '4':
                valor = 2.50*quantidade; break;
            default :
                printf("\n Codigo desconhecido \n "); break;
    }
    if(quantidade >= 15){
        printf("\n Voce tem desconto \n O valor a ser pago e: R$%.2f ",valor*0.85);
    }
    else if(valor >= 40){
        printf("\n Voce tem desconto \n O valor a ser pago e: R$%.2f ",valor*0.85);
    }
    else{
        printf("Voce nao tem desconto \n O valor a ser pago e: R$%2.f ", valor);
    }
    }
    return 0;
    
}