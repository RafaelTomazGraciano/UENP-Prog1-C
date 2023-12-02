/*Implemente um programa que leia os codigos de matrıcula dos alunos de duas disciplinas
(progI e progII) e mostre os codigos de matrıculas dos alunos que estao cursando ambas as
disciplinas. O numero de alunos de ambas as turmas e informado pelo usuario. O espaco
de memoria necessario para armazenar os codigos das matrıculas nas disciplinas deve ser
criado dinamicamente, de acordo com esse numero.*/

#include <stdio.h>
#include <stdlib.h>

void ler(int *prog, int quant){
    for(int i = 0; i < quant; i++){
        printf("Digite a matricula do aluno %d: ", i);
        scanf("%d", &prog[i]);
    }
}

void imprimir(int *prog, int quant){
    for(int i = 0; i < quant; i++){
        printf("Matricula do aluno: %d\n", prog[i]);
    }
}

int main(){
    int quant_prog1, quant_prog2;
    printf("Digite o numero de alunos de Programacao 1: ");
    scanf("%d", &quant_prog1);
    printf("Digite o numero de alunos de Programacao 2: ");
    scanf("%d", &quant_prog2);
    int *prog1 = (int *) malloc(quant_prog1 * sizeof(int *)), *prog2 = (int *) malloc(quant_prog2 * sizeof(int *));
    printf("Alunos de Programacao 1\n");
    ler(prog1, quant_prog1);
    printf("Alunos de Programacao 2\n");
    ler(prog2, quant_prog2);
    printf("Alunos de Programacao 1\n");
    imprimir(prog1, quant_prog1);
    printf("Alunos de Programacao 2\n");
    imprimir(prog2, quant_prog2);
    for(int i = 0; i < quant_prog1; i++){
        for(int j = 0; j < quant_prog2; j++){
            if(prog1[i] == prog2[j]){
                printf("Aluno que tem matricula nas duas turmas: %d", prog1[i]);
            }
        }
    }
    free(prog1);
    free(prog2);
    return 0;
}