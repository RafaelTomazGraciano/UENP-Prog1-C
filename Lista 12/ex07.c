/*Implemente um programa que leia 50 numeros e armazene-os em um arquivo binario.
Depois, leia os numeros gravados no arquivo e mostre na tela a soma desses numeros.*/

#include <stdio.h>

int main(){
    FILE *arch;
    int num, total = 0;
    arch = fopen("EX07.txt", "w");
    for(int i = 0; i < 50; i++){
        printf("Digite o %dº numero: ", i);
        scanf("%d", &num);
        fprintf(arch, "%d ", num);
    }
    fclose(arch);

    arch = fopen("EX07.txt", "r");
    for(int i = 0; i < 50; i++){
        fscanf(arch, "%d ", &num);
        printf("%d ", num);
        total += num;
    }
    printf("\nTotal = %d", total);
}