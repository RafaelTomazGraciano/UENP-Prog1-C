/*Media dos alunos*/

#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4, media;
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
    printf("Digite a nota 4: ");
    scanf("%f", &nota4);

    media = (nota1+nota2+nota3+nota4)/4;

    printf("Media: %.2f\n", media);
    if (media>=7) {
        printf("Aprovado\n");
    }
    else {
        printf("\n Reprovado");
    }
    return 0;
}