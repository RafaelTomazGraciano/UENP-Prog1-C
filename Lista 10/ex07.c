/*Defina uma estrutura adequada para armazenar os dados de um livro, contendo: codigo,
tıtulo, autor e assunto. Com base nessa estrutura, faca o cadastro de livros usando a
alocacao dinamica de memoria e depois mostre esses dados na tela. Por fim, implemente
uma funcao que possibilite a busca de um determinado livro por meio de seu codigo. A
busca deve retornar 1 caso o livro seja encontrado e 0, caso contrario.*/

#include <stdio.h>
#include <stdlib.h>

struct dados
{
    int codigo;
    char titulo[40];
    char autor[40];
    char assunto[50];
};

int busca(struct dados *livro, int n, int codigo){
    for(int i = 0; i < n; i++){
        if(livro[i].codigo == codigo)
            return 1;
    }
    return 0;
}


int main(){
    struct dados *livro;
    char resposta;
    int i = 0, codigo;
    livro = (struct dados *) malloc(sizeof(struct dados));
    if(livro == NULL){
        printf("Erro: memoria insuficiente");
        exit(1);
    }
    do{
        printf("------------------LIVRO %d------------------\n", i);
        printf("Digite o codigo do livro: ");
        scanf("%d", &livro[i].codigo);
        setbuf(stdin, NULL);
        printf("Digite o titulo do livro: ");
        fgets(livro[i].titulo, 40, stdin);
        setbuf(stdin, NULL);
        printf("Digite o autor do livro: ");
        fgets(livro[i].autor, 40, stdin);
        setbuf(stdin, NULL);
        printf("Digite o assunto do livro: ");
        fgets(livro[i].assunto, 50, stdin);
        setbuf(stdin, NULL);
        printf("Deseja resgitrar mais um livro?[S/N]\n");
        resposta = getchar();
        setbuf(stdin, NULL);
        i++;
        if(resposta == 'S' || resposta == 's'){
            livro = (struct dados *) realloc(livro, i*sizeof(struct dados *));
            if(livro == NULL){
                printf("Erro: memoria insuficiente");
                exit(1);
            }
        }
    }while(resposta == 'S' || resposta == 's');

    for(int j = 0; j < i; j++){
        printf("\nCodigo do livro: %d\n", livro[j].codigo);
        printf("Titulo do livro: %s", livro[j].titulo);
        printf("Autor do livro: %s", livro[j].autor);
        printf("Assunto do livro: %s", livro[j].assunto);
    }
    printf("\nDigite o codigo do livro que procura: ");
    scanf("%d", &codigo);
    if(busca(livro, i, codigo))
        printf("O livro foi encontrado");
    else
    printf("O livro nao foi encontrado");
    free(livro);
    return 0;
}