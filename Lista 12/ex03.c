/*Implemente um programa que leia um vetor de inteiros A de 20 elementos e guarde tais
valores em um arquivo, um por linha. Depois, reabra o arquivo e leia os elementos para o
vetor B, verificando se os valores foram gravados corretamente.*/

#include <stdio.h>

int main(){
    FILE *arch;
    int A[20], B[20];

    arch = fopen("EX03.txt", "w");
    for(int i = 0; i < 20; i++){
        printf("Digite o valor do vetor na posicao %d: ", i);
        scanf("%d", &A[i]);
        fprintf(arch, "%d\n", A[i]);
    }
    fclose(arch);

    arch = fopen("EX02.txt", "r");
    for(int i = 0; i < 20; i++){
        fscanf(arch, "%d\n", &B[i]);
        printf("%d  ", B[i]);
    }
    fclose(arch);
    return 0;
}