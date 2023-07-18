/*Faca um programa para ler as coordenadas (X, Y) de um ponto no sistema cartesiano,
indicando a qual quadrante ele pertence. Imprima o quadrante correspondente que estas
coordenadas pertencem, que pode ser: primeiro, segundo, terceiro, quarto, eixo x, eixo y,
origem. Sera eixo x quando a coordenada y for zero. Sera eixo y quando a coordenada x
for zero. Os outros basta achar a localizacao do ponto no plano cartesiano*/

#include <stdio.h>

int main()
{
    float x, y;
    printf("Digite o valor da coordenada x: ");
    scanf("%f", &x);
    printf("Digite o valor da coordenada y: ");
    scanf("%f", &y);

    if(x == 0 && y == 0){
        printf("\n Este ponto esta na origem do plano cartesiano");
    }
    else if(x != 0 && y == 0){
        printf("\n Este ponto esta no eixo x do plano cartesiano");
    }
    else if(x ==0 && y!= 0){
        printf("\n Este ponto esta no eixo y do plano cartesiano");
    }
    else if(x > 0 && y > 0){
        printf("\n Este ponto esta no primeiro quadrante do plano cartesiano");
    }
    else if(x < 0 && y > 0){
        printf("\n Este ponto esta no segundo quadrante do plano cartesiano");
    }
    else if(x < 0 && y < 0){
        printf("Este ponto esta no terceiro quadrante do plano cartesiano");
    }
    else {
        printf("Este ponto esta no quarto dradrante do plano cartesiano");

    }
    return 0;
}