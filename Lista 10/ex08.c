/*Defina uma estrutura aluno contendo os campos nome, sobrenome e nota. O programa
deve ler esses dados e armazenar dinamicamente na memoria. Depois, implemente uma
funcao para imprimir o nome e sobrenome do aluno que possui maior nota. O prototipo
da funcao e a seguinte:
void alunoMaiorNota(struct aluno *vetAlunos, int tam) {..}*/

#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    char nome[10];
    char sobrenome[10];
    int nota;
};

void alunoMaiorNota(struct aluno *vetAlunos, int tam){
    char nome[10], sobrenome[10];
    int maiornota = 0;
    for(int i = 0; i < tam; i++){
        if(vetAlunos[i].nota > maiornota){
            maiornota = vetAlunos[i].nota;
            strcpy(nome, vetAlunos[i].nome);
            strcpy(sobrenome, vetAlunos[i].sobrenome);
        }
    }
    printf("Nome do aluno com a maior nota: %s", nome);
    printf("Sobrenome do aluno com a maior nota: %s", sobrenome);
    printf("Nota do aluno: %d", maiornota);
}

int main(){
    int n;
    printf("Digite a quantidade de alunos a ser registrado: ");
    scanf("%d", &n);
    struct aluno *vetAlunos = malloc(sizeof(struct aluno));
    for(int i = 0; i < n; i++){
        printf("Digite o nome do aluno: ");
        fgets(vetAlunos[i].nome, 10, stdin);
        setbuf(stdin, NULL);
        printf("Digite o sobrenome do aluno: ");
        fgets(vetAlunos[i].sobrenome, 10, stdin);
        setbuf(stdin, NULL);
        printf("Digite a nota do aluno: ");
        scanf("%d", &vetAlunos[i].nota);
    }
    alunoMaiorNota(vetAlunos, n);
    return 0;
}