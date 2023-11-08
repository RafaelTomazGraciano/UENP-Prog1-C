/*Suponha a declaracao de um programa: int vet[10], ∗ptr, value. Quais das expressoes
abaixo sao validas? Justifique sua resposta.

a) ptr = vet + +
b) vet[1] = ptr[3]
c) ptr = vet + 1
d) value = (∗ptr) + +  
*/

#include <stdio.h>

int main(){
    int vet[10], *ptr, value;
    //ptr = vet++;
    vet[1] = ptr[3];
    printf("%d\n", vet[1]);
    ptr = vet + 1;
    printf("%d\n", *ptr);
    value = (*ptr)++;
    printf("%d\n", value);
    printf("%d\n", *ptr);
    printf("%d\n", value);
    printf("%d\n", *ptr);
    return 0;
}

/*

a) ptr = vet + +   //Isso está incorreto, você não pode modificar o endereço de um array,
 vet++ não é possivel porque vetores não pode armazenar outro endereço já que é constante.    

b) vet[1] = ptr[3] //Isso é correto, na posição 1 do vetor está sendo armazenado o endereço da posição 3 do ponteiro.

c) ptr = vet + 1 // Isso é correto, o ponteiro está recendo o vetor com a soma de mais 1. (vet + 1) é possível, mas (vet++) não.

d) value = (∗ptr) + + //O value recebe o valor do (*ptr), o value não revebe o valor do (*ptr)++.

*/