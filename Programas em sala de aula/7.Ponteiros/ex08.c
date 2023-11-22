/*acessando elementos do vetor, soma de vetores*/

#include <stdio.h>

int soma(int *p, int n){
    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += p[i];
    }
    return soma;
}

int main(){
    int vet[5] = {5,6,7,8,9};
    int *p = vet;
    for(int i = 0; i < 5; i++){
        printf("%d ", p[i]);
    }
    printf("\n%d", p[3]);
    printf("\nSoma: %d", soma(vet, 5));
    return 0;
}