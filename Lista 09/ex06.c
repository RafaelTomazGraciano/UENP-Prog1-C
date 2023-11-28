/*Uma pesquisa feita com alunos do ensino fundamental coletou alguns dados para analise,
como nome, idade, altura e peso. Faca um programa que leia os dados de 20 criancas e
armazene em um vetor de estrutura. Depois, implemente uma funcao que mostre o nome
do aluno mais novo e o nome do aluno com o maior peso.*/

#include <stdio.h>
#include <string.h>
#define MAX 20

struct dados
{
    char nome[50];
    int idade;
    float altura;
    float peso;
};

void analise(struct dados *d){
    char nome_novo[50], nome_peso[50];
    int mais_novo = 999999;
    float maior_peso = 0;
    for(int i = 0; i < MAX; i++){
        if(d[i].idade < mais_novo){
            mais_novo = d[i].idade;
            strcpy(nome_novo, d[i].nome);
        }
        if(d[i].peso > maior_peso){
            maior_peso = d[i].peso;
            strcpy(nome_peso, d[i].nome);
        }
    }
    printf("\nNome do aluno mais novo: %s", nome_novo);
    printf("Nome aluno de maior peso: %s", nome_peso);
}

int main(){
    struct dados dado[MAX];
    for(int i = 0; i < MAX; i++){
        printf("Digite o nome do aluno %d: ", i);
        fgets(dado[i].nome, 50, stdin);
        setbuf(stdin, NULL);
        printf("Digite a idade o aluno %d: ", i);
        scanf("%d", &dado[i].idade);
        printf("Digite a altura do aluno %d: ", i);
        scanf("%f", &dado[i].altura);
        printf("Digite peso do aluno %d: ", i);
        scanf("%f", &dado[i].peso);
        setbuf(stdin, NULL);
    }
    analise(dado);
    return 0;
}