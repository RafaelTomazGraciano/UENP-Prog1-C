/*Implemente um programa que leia os nomes de dois arquivos texto. Depois, crie um terceiro
arquivo texto contendo o conteudo do primeiro seguido do conteudo do segundo.*/

#include <stdio.h>

void concatenate( FILE *base, FILE *copia);


int main(){
    FILE *arch1, *arch2, *arch3;
    char arquivo1[255], arquivo2[255];

    printf("Digite o nome do primeiro arquivo: ");
    scanf("%254s", arquivo1);
    setbuf(stdin, NULL);
    printf("Digite o nome do segundo arquivo: ");
    scanf("%254s", arquivo2);
    arch1 = fopen(arquivo1, "r");
    arch2 = fopen(arquivo2, "r");
    arch3 = fopen("Arquivo3.txt", "w");
    if(arch1 == NULL || arch2 == NULL || arch3 == NULL){
        printf("Erro abrindo arquivo");
        return 1;
    }
    concatenate(arch3, arch1);
    concatenate(arch3, arch2);
    printf("Processo Completo!");
    fclose(arch1);
    fclose(arch2);
    fclose(arch3);
    return 0;
}

void concatenate( FILE *base, FILE *copia)
{
    char aux[1000];

    while (fgets (aux, sizeof aux, copia) != NULL)
    {
        fputs (aux, base);
    }
}