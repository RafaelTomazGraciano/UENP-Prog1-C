/*Uma locadora de carros esta fazendo uma promocao e esta alugando carros no perıodo junino
por R$ 30,00 a diaria. Alem disso, a locadora cobra R$ 0,01 por quilometro rodado. Como
e perıodo de Sao Joao, a locadora quer fidelizar os clientes e esta dando 10% de desconto
no valor total do aluguel de qualquer carro. Implemente um programa em C que leia quantos dias 
a pessoa ficou com o carro: [1; 30] e quantos kilometros ela rodou [1; 1000], calcule e 
mostre o valor total que a pessoa deve pagar pelo aluguel do carro.*/

#include <stdio.h>

int main()
{
    int dias;
    float kilometros;
    printf("Digite quantos dias voce ficou com o carro: ");
    scanf("%i", &dias);
    printf("Digite quantos kilometros voce percorreu com o carro: ");
    scanf("%f", &kilometros);
    printf("Valor a pagar pelo valor do aluguel e: R$%.2f", (30*dias+0.01*kilometros)*0.90);
}