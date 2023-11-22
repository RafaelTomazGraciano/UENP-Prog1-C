#include <stdio.h>

struct cliente
{
    char nome[50];
    int codigo;
    int dianasc;
};


int main(){
    struct cliente c1[5];
    for(int i=0; i<5; i++){
        printf("Digite o nome: ");
        fgets(c1[i].nome, 50, stdin);
        setbuf(stdin, NULL);
        printf("Digite o codigo: ");
        scanf("%d", &c1[i].codigo);
        printf("Digite o dia de nascimento: ");
        scanf("%d", &c1[i].dianasc);
        setbuf(stdin, NULL);
    }
    for(int i=0; i<5; i++){
        printf("\nCodigo: %d",c1[i].codigo);
        printf("\nnome: %s",c1[i].nome);

        
        printf("dia de nascimento: %d\n",c1[i].dianasc);
    }
    return 0;
}