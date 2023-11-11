/*Faca um programa que leia uma matriz quadrada de ordem 4 X 4 de numeros inteiros.
Depois, leia um numero x e verifique quantas vezes x aparece na matriz.*/

#include <stdio.h>

int main(){
    int matriz[4][4], x, cont = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite o valor da posicao [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    int *ptr = &matriz[0][0];
    printf("Digite um numero: ");
    scanf("%d", &x);
    for(int i = 0; i < 16; i++){
        if(*(ptr+i) == x){
            cont++;
        }
    }
    printf("X apareceu %d vezes na matriz", cont);
}