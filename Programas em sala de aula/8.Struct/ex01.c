/*struct*/

#include <stdio.h>

struct cliente
{
    int codigo;
    char nome[50];
    int dianasc;
};


int main(){
    struct cliente c1;  
    printf("Digite o codigo: ");
    scanf("%d",&c1.codigo);
    setbuf(stdin, NULL);
    printf("Digite o nome: ");
    fgets(c1.nome, 50, stdin);
    setbuf(stdin, NULL);
    printf("Digite o dia de nascimento: ");
    scanf("%d",&c1.dianasc);
    printf("\nCodigo: %d",c1.codigo);
    printf("\nnome: %s",c1.nome);
    printf("dia de nascimento: %d",c1.dianasc);

    struct cliente c2 = {101, "fulano", 17};
    printf("\nCodigo: %d",c2.codigo);
    printf("\nnome: %s",c2.nome);
    printf("\ndia de nascimento: %d",c2.dianasc);

    
    return 0;
}