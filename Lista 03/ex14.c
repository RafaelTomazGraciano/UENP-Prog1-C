/*Faca um programa que receba o trajeto em km percorrido por um veıculo, o tipo do veıculo
e mostre o consumo estimado de combustivel, sabendo-se que um veıculo tipo A faz 15 km
com um litro de gasolina, um veıculo tipo B faz 12 km e um veıculo tipo C, 10 km por litro.*/

#include <stdio.h>

int main()
{
    float km;
    char tipoVeiculo;
    printf("Digite o tipo de veiculo. Tipo[A], tipo [B] e tipo [C] \n");
    scanf("%c", &tipoVeiculo);
    printf("Digite quantos kilometros tem o trajeto: ");
    scanf("%f", &km);
    
    switch (tipoVeiculo){
        case 'A':
        printf("O consumo estimado de combustivel e %.2f", km/15); break;
        case 'B':
        printf("O consumo estimado de combustivel e %.2f", km/12); break;
        case 'C': 
        printf("O consumo estimado de combustivel e %.2f", km/10); break;
        default: 
        printf("Tipo de veiculo desconhecido"); 
    }
    return 0;
}