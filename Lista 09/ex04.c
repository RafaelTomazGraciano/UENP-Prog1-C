/*Faca um programa para montar um banco de dados relacionado a um jogo, o qual deve
conter informacoes de inumeros monstros e personagens. Inicialmente, o programa deve
receber a quantidade de personagens/monstros a ser cadastrada. Os dados a serem colocados
no banco sao:
• Uma sequencia de caracteres, que podera ter no maximo 20 caracteres, representando
um nome.
• 5 inteiros, representando ID, Level, Vida, Ataque e Defesa.
Ao final, o programa deve exibir o banco de dados cadastrado.*/

#include <stdio.h>

struct dados
{
    char nome[20];
    int id, level, vida, ataque, defesa;
};

int main(){
    int n;
    printf("Quantos personagens/monstros voce deseja registrar: ");
    scanf("%d", &n);
    setbuf(stdin, NULL);
    struct dados dado[n];
    for(int i = 0; i < n; i++){
        printf("Digite o nome do personagem ou monstro: ");
        fgets(dado[i].nome, 20, stdin);
        setbuf(stdin, NULL);
        printf("Digite o id: ");
        scanf("%d", &dado[i].id);
        printf("Digite o level: ");
        scanf("%d", &dado[i].level);
        printf("Digite a vida: ");
        scanf("%d", &dado[i].vida);
        printf("Digite o ataque: ");
        scanf("%d", &dado[i].ataque);
        printf("Digite a defesa: ");
        scanf("%d", &dado[i].defesa);
        setbuf(stdin, NULL);
    }
    printf("\n\nDados registrados dos personagens/monstros\n");
    for(int i = 0; i < n; i++){
        printf("\nNome do personagem ou monstro: %s", dado[i].nome);
        printf("Id: %d", dado[i].id);
        printf("\nLevel: %d", dado[i].level);
        printf("\nVida: %d", dado[i].vida);
        printf("\nAtaque: %d", dado[i].ataque);
        printf("\nDefesa: %d\n", dado[i].defesa);
        setbuf(stdin, NULL);
    }
    return 0;
}
