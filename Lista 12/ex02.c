/*Suponha que agora foi definida uma estrutura para representar os dados dos livros, conforme
exemplo abaixo. Com base nesta estrutura, implemente um programa para 
(a) gravar os dados dos livros em um arquivo. Em seguida, implemente outro programa para 
(b) ler osdados do arquivo e mostrar os dados lidos na tela.

struct livro{
char titulo[30];
int numRegistro;
double preco;
};*/

#include <stdio.h>

struct livro{
char titulo[30];
int numRegistro;
double preco;
};


int main(){
    FILE * arch;
    char resposta;
    struct livro livro;

    arch = fopen("EX02.txt", "w");

    do{
        printf("Digite o numero de registro do livro: ");
        scanf("%d", &livro.numRegistro);
        setbuf(stdin, NULL);
        printf("Digite o titulo do livro: ");
        scanf("%49s", livro.titulo);
        setbuf(stdin, NULL);
        printf("Digite o preco do livro: ");
        scanf("%lf", &livro.preco);
        setbuf(stdin, NULL);
        fprintf(arch, "Numero_de_Registro: %d | Titulo: %s | Preco: %.2lf", livro.numRegistro, livro.titulo, livro.preco);
        printf("Diseja registra mais algum livro? [S/N]\n");
        scanf("%c", &resposta);
        setbuf(stdin, NULL);
    }while(resposta == 's' || resposta == 'S');
    fclose(arch);
    
    arch = fopen("EX01.txt", "r");
    while(1){
        if(feof(arch))
            break;
        fscanf(arch, "Numero_de_Registro: %d | Titulo: %s | Preco: %lf", &livro.numRegistro, livro.titulo, &livro.preco);
        printf("Numero_de_Registro: %d | Titulo: %s | Preco: %.2lf\n", livro.numRegistro, livro.titulo, livro.preco);
    }
    
    printf("Fim do arquivo!");
    fclose(arch);
    return 0;
}