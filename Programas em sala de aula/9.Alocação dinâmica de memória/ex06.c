/*alocacao de memoria para struct*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno
{
    int matricula;
    char nome[50];
};

int main(){
    struct aluno *alunos;
    // aloca uma unica struct
    alunos = (struct aluno *) malloc(sizeof(struct aluno));
    alunos->matricula = 101010101;
    strcpy(alunos->nome, "Rafael");

    printf("Matricula = %d\nNome = %s\n", alunos->matricula, alunos->nome);
    free(alunos);
    return 0;
}