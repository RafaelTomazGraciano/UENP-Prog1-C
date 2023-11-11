/*Faça um programa que receba um vetor de 20 elementos inteiros, em seguida, percorra o
vetor atraves do ponteiro ptr_inicio a partir do inıcio do vetor e outro ponteiro ptr_fim
a partir do final do vetor, ate os dois ponteiros se encontrarem no meio do vetor.*/

#include <stdio.h>

int main(){
    int vet[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    int * ptr_inicio = vet;
    int *ptr_fim = vet+19;
    while(ptr_inicio <= ptr_fim){
        printf("%d  ||  %d\n", *ptr_inicio, *ptr_fim);
        ptr_inicio++;
        ptr_fim--;
    }
    return 0;    
}