/*Suponha a declaracao de um vetor: int vet[50]. Qual expressao abaixo referencia o quinto
elemento do vetor?

a) ∗(vet + 4)

b) ∗(vet + 5)

c) vet + 4

d) vet + 5

e) nenhuma das anteriores
*/

#include <stdio.h>

int main(){
    int vet[50];
     vet[4] = 10;
    printf("%d\n",*(vet + 4));
    printf("%d\n",*(vet + 5));
    printf("%d\n", vet +4);
    printf("%d\n", vet +5);
    return 0;
}

// A resposta certa é a letra A "∗(vet + 4)"