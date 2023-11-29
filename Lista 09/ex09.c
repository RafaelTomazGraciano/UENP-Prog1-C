/*Faca um programa para gerenciar o cadastro de um numero indeterminado de games/jogos
digitais. Para isso:
a. Defina uma estrutura adequada para representar cada jogo, incluindo os campos: nome
do jogo, genero (por ex., RPG, acao, simulacao,etc.), modo de jogo (single player,
multiplayer), plataforma suportada e posicao no ranking. Outros campos podem ser
incluıdos, caso julgue pertinente.
b. Crie uma funcao para ler as informacoes dos jogos e armazenar em um vetor de
estrutura (array de struct).
c. Crie uma funcao para exibir todos os jogos cadastrados.
d. Crie uma funcao que receba o genero do jogo e mostre as informacoes de todos os
jogos que se encaixam nessa classificacao.
e. Crie uma funcao que leia do usuario um numero entre 1 e 5 (quanto maior o ranking,
maior a classificacao). Em seguida, exiba as informacoes do jogo correspondendo
a posicao do ranking dos jogos de que voce mais gostou, de acordo com o que foi
informado pelo usuario.
f. Crie uma funcao que receba o nome do jogo e indique se ele esta entre os seus favoritos
ou nao.*/

#include <stdio.h>
#include <string.h>
struct jogo
{
    char nome[100];
    char genero[100];
    char modo_jogo[100];
    char plataforma[100];
    int ranking;
};

void ler(struct jogo *jogos, int n){
    for(int i =0; i < n; i++){
        setbuf(stdin,NULL);
        printf("Digite o nome do jogo %d: ", i);
        fgets(jogos[i].nome, 100, stdin);
        setbuf(stdin, NULL);
        printf("Digite o genero do jogo %d: ", i);
        fgets(jogos[i].genero, 100, stdin);
        setbuf(stdin, NULL);
        printf("Digite o modo de jogo %d: ", i);
        fgets(jogos[i].modo_jogo, 100, stdin);
        setbuf(stdin, NULL);
        printf("Digite a plataforma suportada para o jogo %d: ", i);
        fgets(jogos[i].plataforma, 100, stdin);
        setbuf(stdin, NULL);
    }
}

void exibir(struct jogo *jogos, int n){
    printf("\n");
    for(int i =0; i < n; i++){
        printf("Nome do jogo: %s", jogos[i].nome);
        printf("Genero do jogo: %s", jogos[i].genero);
        printf("Modo de jogo: %s", jogos[i].modo_jogo);
        printf("Plataforma suportada para o jogo: %s", jogos[i].plataforma);
        printf("--------------------------------------------------\n");
    }
}

void classificacao(struct jogo *jogos, int n){
    char genero[100];
    printf("Digite o genero do jogo que procura: ");
    fgets(genero, 100, stdin);
    setbuf(stdin, NULL);
    for(int i =0; i < n; i++){
        if(strcmp(genero, jogos[i].genero) == 0){
            printf("\nJogo de acordo com o genero que procura\n");
            printf("Nome do jogo: %s", jogos[i].nome);
            printf("Modo de jogo: %s", jogos[i].modo_jogo);
            printf("Plataforma suportada para o jogo: %s", jogos[i].plataforma);
            printf("Posicao no ranking do jogo: %d\n", jogos[i].ranking);
            printf("--------------------------------------------------\n");
        }
    }
}

void ranking(struct jogo *jogos, int n){
    int maiorNota;
    for(int i = 0; i < n; i++){
        printf("De uma nota de 1 a 5 para o jogo %d: ", i);
        scanf("%d", &jogos[i].ranking);
        maiorNota = (jogos[i].ranking > maiorNota) ? jogos[i].ranking : maiorNota;
    }
    printf("\nJogos com maior nota (%d):\n",maiorNota);
    for(int i = 0; i < n; i++){
        if(jogos[i].ranking == maiorNota)
            printf("%s",jogos[i].nome);
    }
}

int favoritos(struct jogo *jogos, int n, char *nome){
    int maiorNota;
    for(int i = 0; i < n; i++){
    maiorNota = (jogos[i].ranking > maiorNota) ? jogos[i].ranking : maiorNota;
    }
    for(int i = 0; i < n; i++){
        if(strcmp(nome, jogos[i].nome) == 0 && jogos[i].ranking == maiorNota){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    char nome[100];
    printf("Digite o numero de jogos que deseja cadastrar: ");
    scanf("%d", &n);
    struct jogo jogos[n];
    ler(jogos, n);
    exibir(jogos, n);
    classificacao(jogos, n);
    ranking(jogos, n);
    setbuf(stdin, NULL);
    printf("Digite o nome de um jogo: ");
    fgets(nome, 100, stdin);
    setbuf(stdin, NULL);
    if(favoritos(jogos, n, nome)){
        printf("O jogo esta entre os favoritos\n");
    } else {
        printf("O jogo nao esta entre os favoritos\n");
    }
    return 0;
}