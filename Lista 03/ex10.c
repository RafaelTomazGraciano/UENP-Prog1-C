/*Toda apresentacao de trabalho tem seus requisitos mınimos que precisam ser atendidos,
caso contrario, ele nao e aceito e o aluno fica com nota 0. Suponha uma apresentacao de
Programacao com os seguintes requisitos mınimos:
• Requisito 1: Inferface grafica OU Inteligencia Artificial.
• Requisito 2: Encapsulamento E Indentacao
• Requisito 3: Uso de Structs
Dada a entrada, descubra se o aluno ficou com 0 ou o seu trabalho sera avaliado. A entrada
e composta de 5 numeros, representando respectivamente Interface Grafica, Inteligencia
Artificial, Encapsulamento, Indentacao e Structs. Os numeros podem ser: 0 - Se o trabalho
nao possui tal quesito. 1 - Se o trabalho possui tal quesito.*/

#include <stdio.h>

int main()
{
    int interfaceGrafica, inteligenciaArtificial, encapsulamento, indentacao, structs;
    printf("   Tabela de Requisitos da apresentacao  \n");
    printf("Requisito 1: Intergace grafica OU Inteligencia Artificial \n");
    printf("Requisito 2: Encapsulamento E Identacao \n");
    printf("Requisito 3: Uso de Structs \n");
    printf("Voce apresentou sobre Interface Grafica? Sim[1] Nao[0] \n");
    scanf("%d", &interfaceGrafica);
    printf("Voce apresentou sobre Inteligencia Artificial? Sim[1] Nao[0] \n");
    scanf("%d", &inteligenciaArtificial);
    printf("Voce apresentou sobre Encapsulamento? Sim[1] Nao[0] \n");
    scanf("%d", &encapsulamento);
    printf("Voce apresentou sobre Indentacao? Sim[1] Nao[0] \n");
    scanf("%d", &indentacao);
    printf("Voce apresentou sobre o Uso de Structs? Sim[1] Nao[0] \n");
    scanf("%d", &structs);

    if((interfaceGrafica == 1 || inteligenciaArtificial == 1) && encapsulamento == 1 && indentacao == 1 && structs == 1){
        printf(" \n O seu trabalho sera avaliado");
    }
    else{
        printf("\n Sua nota sera zero");
    }

    return 0;
}