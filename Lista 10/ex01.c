/*Implemente uma funcao que receba como parametro dois vetores vetX e vetY de tamanho n.
A funcao deve retornar o ponteiro para um vetor soma de tamanho n alocado dinamicamente,
em que soma = vetX + vetY.*/

#include <stdio.h>
#include <stdlib.h>

int *soma_tamanho(int vx[], int vy[], int n){
    int *p;
    p = (int *) malloc(n * sizeof(int *));
    if(p == NULL){
        printf("Erro: memoria insuficiente.");
        exit(1);
    }
    for(int i = 0; i < n; i++){
        p[i] = vx[i] + vy[i];
    }
    return p;
}

int main(){
    int n, *p;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetX[n], vetY[n];
    printf("\nPreenchendo vetorX\n");
    for(int i = 0; i < n; i++){
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetX[i]);
    }
    printf("\nPreenchendo vetorY\n");
    for(int i = 0; i < n; i++){
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetY[i]);
    }
    p = soma_tamanho(vetX, vetY, n);
    for(int i = 0; i < n; i++){
        printf("\n%d", p[i]);
    }
    free(p);
    return 0;
}