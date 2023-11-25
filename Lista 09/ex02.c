/*Faca um programa para cadastrar um conjunto de ate 100 lojas contendo os seguintes
campos: nome da loja, endereco, telefone e preco de um determinado produto eletronico.
Em seguida, o programa deve exibir a media dos precos dos produtos cadastrados e uma
relacao contendo o nome, endereco e telefone das lojas cujo preco estao abaixo da media
calculada.*/

#include <stdio.h>

struct endereco
{
    char nomerua[50];
    char nomebairro[50];
    int numero;
};


struct cadastro
{
    char nomeloja[50];
    struct endereco endereco;
    char telefone[20];
    float preco;
};

float media(struct cadastro *lojas){
    float soma = 0;
    for(int i = 0; i < 5; i++){
        soma += lojas[i].preco;
    }
    return soma/100;
}

int main(){
    struct cadastro lojas[100];
    for(int i = 0; i < 100; i++){
        printf("Digite o nome da loja %d: ", i);
        fgets(lojas[i].nomeloja, 50, stdin);
        setbuf(stdin, NULL);
        printf("Digite o nome da rua: ");
        fgets(lojas[i].endereco.nomerua, 50, stdin);
        setbuf(stdin, NULL);
        printf("Digite o nome do bairro: ");
        fgets(lojas[i].endereco.nomebairro, 50, stdin);
        setbuf(stdin, NULL);
        printf("Digite o numero: ");
        scanf("%d", &lojas[i].endereco.numero);
        setbuf(stdin, NULL);
        printf("Digite o numero de telefone: ");
        fgets(lojas[i].telefone, 20, stdin);
        setbuf(stdin, NULL);
        printf("Digite o preco: ");
        scanf("%f", &lojas[i].preco);
        setbuf(stdin, NULL);
    }
    printf("\n\nMedia dos precos: %.2f\n", media(lojas));
    printf("Lojas com preco abaixo da media\n\n");
    for(int i =0; i < 100; i++){
        if (lojas[i].preco < media(lojas)){
            printf("Nome da loja: %s", lojas[i].nomeloja);
            printf("Nome da rua: %s", lojas[i].endereco.nomerua);
            printf("Nome do bairro: %s", lojas[i].endereco.nomebairro);
            printf("Numero: %d\n", lojas[i].endereco.numero);
            printf("Telefone: %s", lojas[i].telefone);
            printf("Preco: %.2f\n", lojas[i].preco);
        }
    }
    return 0;
}