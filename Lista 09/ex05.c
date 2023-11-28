/*Dada a estrutura a seguir representando os dados do aluno de uma disciplina.
    struct cadastro{
        int matricula;
        char nome[50];
    float nota;
    };
Implemente funcoes para:
a. Ler os dados de no maximo 50 alunos e amarzene em um vetor de estrutura.
b. Exibir os dados dos alunos, informando os alunos aprovados (nota ≥ 7.0), de exame
(4.0 ≤ nota < 7.0) e reprovados (nota < 4.0).
c. Mostrar qual e a media geral da turma.
d. Exibir o nome do aluno com a maior nota da turma.*/

#include <stdio.h>
#include <string.h>
# define MAX 50

struct cadastro
{
    int matricula;
    char nome[50];
    float nota;
};

void ler(struct cadastro *notas);
void exibirdados(struct cadastro *notas);
float media(struct cadastro *notas);
void maiornota(struct cadastro *notas);

int main(){
    struct cadastro notas[MAX];
    ler(notas);
    printf("\n");
    exibirdados(notas);
    printf("\nMedia da turma: %.2f", media(notas));
    maiornota(notas);
    return 0;
}

void ler(struct cadastro *notas){
    for(int i = 0; i < MAX; i++){
        printf("Digite a matricula do aluno %d: ", i);
        scanf("%d", &notas[i].matricula);
        setbuf(stdin, NULL);
        printf("Digite o nome do aluno %d: ", i);
        fgets(notas[i].nome, 50, stdin);
        setbuf(stdin, NULL);
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &notas[i].nota);
        setbuf(stdin, NULL);
    }
}

void exibirdados(struct cadastro *notas){
    for(int i = 0; i < MAX; i++){
        if(notas[i].nota >= 7.0){
            printf("Aluno %d esta aprovado!\n", notas[i].matricula);
        }
        else if(notas[i].nota < 7.0 && notas[i].nota >= 4.0){
            printf("Aluno %d esta de exame!\n", notas[i].matricula);
        }
        else{
            printf("Aluno %d esta reprovado!", notas[i].matricula);
        }
    }
}

float media(struct cadastro *notas){
    float soma = 0;
    for(int i = 0; i < MAX; i++){
        soma += notas[i].nota;
    }
    return soma/MAX;
}

void maiornota(struct cadastro *notas){
    float maior = 0;
    char nome[50];
    for(int i = 0; i < MAX; i++){
        if(notas[i].nota > maior){
            maior = notas[i].nota;
            strcpy(nome, notas[i].nome);
        }
    }
    printf("\nA maior nota e %.2f do aluno %s", maior, nome);
    
}
