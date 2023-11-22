/*atribuicao entre estruturas*/
#include <stdio.h>

struct data
{
    int dianasc;
    int mesnasc;
    int anonasc;
};

struct cliente
{
    char nome[50];
    int codigo;
    struct data data;
};

int main(){
    struct cliente c[5];
    for(int i = 0; i < 5; i++){
        printf("Digite o nome: ");
        fgets(c[i].nome, 50, stdin);
        setbuf(stdin, NULL);
        printf("Digite o codigo: ");
        scanf("%d", &c[i].codigo);
        printf("Digite o dia de nascimento: ");
        scanf("%d", &c[i].data.dianasc);
        printf("Digite o mes de nascimento: ");
        scanf("%d", &c[i].data.mesnasc);
        printf("Digite o ano de nascimento: ");
        scanf("%d", &c[i].data.anonasc);
        setbuf(stdin, NULL);
    }
    for(int i = 0; i < 5; i++){
        printf("\nNome: %s", c[i].nome);
        printf("Codigo: %d", c[i].codigo);
        printf("\nDia de nascimento: %d", c[i].data.dianasc);
        printf("\nMes de nascimento: %d", c[i].data.mesnasc);
        printf("\nAno de nascimento: %d", c[i].data.anonasc);
    }
    return 0;
}