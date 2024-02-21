/*Faca uma funcao que receba como parametros um vetor e seu tamanho grave-o em um
arquivo texto. Cada valor do vetor deve ser salvo em uma linha do arquivo.*/

#include <stdio.h>
#include <stdlib.h>

void arquivo(int *vet, int tam);

int main(){
    int vet, tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    arquivo(&vet, tam);
    return 0;
}

void arquivo(int *vet, int tam){
    FILE *arch;
    vet = (int *)  malloc(tam * sizeof(int *));
    arch = fopen("EX05.txt", "w");
    for(int i = 0; i < tam; i++){
        printf("Digite o valor do vetor na posicao %d: ", i);
        scanf("%d", &vet[i]);
        fprintf(arch, "%d\n", vet[i]);
    }
    printf("\nProcesso finalizado");
    free(vet);
    fclose(arch);
}