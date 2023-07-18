/*Nos parques de diversao, alguns brinquedos tem idade e altura mınimas para poder andar
neles. Em dado parque com 3 brinquedos temos a seguinte limitacao:
• Barca Viking: 1,5m de altura e 12 anos.
• Elevator of Death: 1,4m de altura e 14 anos.
• Final Killer: 1,7m de altura ou 16 anos.
Faca um programa que receba a altura e a idade de uma pessoa, identifique quantos
brinquedos ele pode andar.*/

#include <stdio.h>

int main()
{
    float idade, altura;
    printf("Qual a sua idade? \n");
    scanf("%f", &idade);
    printf("Qual a sua altura? \n");
    scanf("%f", &altura);

    if(altura >= 1.7 && idade >= 16){
        printf("Voce e capaz de andar na Barca Viking, Elevator of Death e Final Killer");
    }
    else if(altura >= 1.4 && idade >= 14){
        printf("Voce e capaz de andar na Barca Viking e no Elevator of Death");
    }
    else if( altura >= 1.5 && idade >= 12){
        printf("Voce so e capaz de andar na Barca Viking");
    }
    else{
        printf("Infelizmente voce nao pode andar em nenhum desses brinquedos");
    }
    return 0;
}