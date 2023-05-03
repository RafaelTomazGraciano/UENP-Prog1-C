/*recebe a idade de uma pessoas e informe a sua classe eleitoral*/

#include<stdio.h>

int main()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if(idade<16){
        printf("\n Voce ainda nao e um eleitor \n");
    }
    else if(idade>=18 && idade<=65){
        printf("\n Voce e um eleitor obrigatorio \n");
    }
    else {
        printf("\n Voce e um eleitor facultativo");
    }
    return 0;
}