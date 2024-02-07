/*Implemente uma funcao recursiva que mostre o maior elemento de um array de inteiros. O
prototipo da funcao recursiva e a seguinte:
• int maiorElemento(int *vet, int tam) {...}*/

#include <stdio.h>
#include <stdlib.h>

int maiorElemento(int *vet, int tam){
int x;
   if (tam == 1) 
        x = vet[0];
   else {
        x = maiorElemento(vet, tam-1); 
        if (x < vet[tam-1]) 
            x = vet[tam-1];
   }
   return x;
}

int main(){
    int *vet, tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    vet = (int *) malloc( tam * sizeof( int *));
    for(int i = 0; i < tam; i++){
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vet[i]);
    }
    printf("Maior elemento: %d", maiorElemento(vet, tam));
    free(vet);
    return 0;
}