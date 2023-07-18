/*Faca um programa que receba dois numeros “x” e “y” e execute as operacoes especificadas
na Tabela 3, de acordo com a opcao escolhida pelo usuario. Caso a opcao escolhida seja
invalida, o programa deve mostrar uma mensagem de erro e finalizar sua execucao. Lembre-
se de que na divisao “y“ deve ser diferente de zero.

                                        Tabela 3: Operacoes disponıveis

                                     Opcoes                       Operacoes
                                       1                  Media aritmetica entre x e y
                                       2                Diferenca do maior pelo menor numero
                                       3                      Produto entre x e y
                                       4                      Divisao entre x e y            */

#include <stdio.h>

int main()
{
    int codigo;
    float x, y;
    printf("Opcoes          |               Operacoes                  \n");
    printf("  1             |        Media aritmetica entre x e y      \n");
    printf("  2             |    Diferenca do maior pelo menor numero  \n");
    printf("  3             |          Produto entre x e y             \n");
    printf("  4             |          Divisao entre x e y             \n");
    printf("Digite uma das opcoes acima: ");
    scanf("%d", &codigo);
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de y: ");
    scanf("%f", &y);

    switch(codigo){
        case 1:
        printf("A media aritmetica entre x e y e: %.2f", (x+y)/2); break;
        case 2:
        if(x>y){
            printf("A diferenca do maior pelo menor numero e: %.2f", x-y);
        }
        else{
            printf("A diferenca do maior pelo menor numero e: %.2f", y-x);
        }
        break;
        case 3:
        printf("O produto entre x e y e: %.2f", x*y); break;
        case 4:
        if(y>0){
            printf("A divisao entre x e y e: %.2f", x/y);
        }
        else{
            printf("Nao e possivel dividir um numero por zero");
        }
        break;
        default:
        printf("Opcao desconhecida");
    }
    return 0;
}