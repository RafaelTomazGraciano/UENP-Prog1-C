/*Implemente um programa que 
(a) escreva em um arquivo um conjunto de dados formatados
sobre livros, como por exemplo, o tıtulo do livro, o numero de registro e o preco do livro. 
Em seguida, implemente outro programa que 
(b) leia os dados do arquivo criado anteriormente e mostre os dados lidos na tela.*/

#include <stdio.h>

struct livros
{
    int numero_registro;
    char titulo[50];
    float preco;
};


int main(){
    FILE * arch;
    char resposta;
    struct livros livro;

    arch = fopen("EX01.txt", "w");

    do{
        printf("Digite o numero de registro do livro: ");
        scanf("%d", &livro.numero_registro);
        setbuf(stdin, NULL);
        printf("Digite o titulo do livro: ");
        scanf("%49s", livro.titulo);
        setbuf(stdin, NULL);
        printf("Digite o preco do livro: ");
        scanf("%f", &livro.preco);
        setbuf(stdin, NULL);
        fprintf(arch, "Numero_de_Registro: %d | Titulo: %s | Preco: %.2f", livro.numero_registro, livro.titulo, livro.preco);
        printf("Diseja registra mais algum livro? [S/N]\n");
        scanf("%c", &resposta);
        setbuf(stdin, NULL);
    }while(resposta == 's' || resposta == 'S');
    fclose(arch);
    
    arch = fopen("EX01.txt", "r");
    while(1){
        if(feof(arch))
            break;
        fscanf(arch, "Numero_de_Registro: %d | Titulo: %s | Preco: %f", &livro.numero_registro, livro.titulo, &livro.preco);
        printf("Numero_de_Registro: %d | Titulo: %s | Preco: %.2f\n", livro.numero_registro, livro.titulo, livro.preco);
    }
    
    printf("Fim do arquivo!");
    fclose(arch);
    return 0;
}