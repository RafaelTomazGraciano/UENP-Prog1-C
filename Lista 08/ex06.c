/*Indique quais as saıdas produzidas pelo programa a seguir. Faca o teste de mesa de cada
instrucao e verifique os resultados. Depois, voce pode executar o codigo comparando os
resultados.

    #include <stdio.h>

    int main (){
    int vet1 [] = {1 , 2 , 3 , 4 , 5 , 6 , 7 } ;
    int vet 2 [] = {7 , 6 , 5 , 4 , 3 , 2 , 1 } ;
    int ∗ptr1 = vet1 ;
    int ∗ptr2 = vet 1 + 3 ;
    int ∗ptr3 = ve t 2 + 5 ;
    (∗ptr1)++;
    (∗ptr2)++;
    (∗ptr3)−−;
    printf( "vet1 [0]: %d, vet1 [3]: %d\n" , ve t 1 [ 0 ] , ve t 1[3]);
    printf( "vet2 [0]: %d, vet2 [5]: %d\n" , ve t 2 [ 0 ] , ve t 2[5]);
    return 0 ;
    }*/

    #include <stdio.h>

    int main (){
    int vet1[] = {1 , 2 , 3 , 4 , 5 , 6 , 7 } ; // é definido um vetor de 7 posições, os numeros estão em ordem crescente
    int vet2[] = {7 , 6 , 5 , 4 , 3 , 2 , 1 } ; //é difinido um vetor de 7 posições, os numeros estão em ordem decrescente
    int *ptr1 = vet1 ; // ptr1 aponta para o vet1
    int *ptr2 = vet1 + 3 ; // ptr2 aponta para vet1 especificamente para a quarta posição
    int *ptr3 = vet2 + 5 ; // ptr3 aponta para vet2 especificamente para a sexta posição
    (*ptr1)++; // ptr1 está mudando o valor de vet1[0] que é igual a 1 acrescendo mais 1, 1+1=2
    (*ptr2)++; // ptr2 está mudando o valor de vet1[4] que é igual a 4, acrescendo mais 1, 4+1=5 
    (*ptr3)--; // ptr3 está mudando o valor de vet2[6] que é igual a 2, decrescendo 1, 2-1=1
    printf("vet1 [0]: %d, vet1 [3]: %d\n" , vet1[0] , vet1[3]); // vet[0]=2   vet[3]=5
    printf("vet2 [0]: %d, vet2 [5]: %d\n" , vet2[0] , vet2[5]); // vet2[0]=7   vet2[5]=1
    return 0 ;
    }