/*Calcula e informa a nota de 30 alunos*/

#include <stdio.h>

int main()
{
  float nota1, nota2, nota3, nota4, media;
  int aluno = 1;
  while(aluno < 30){
    printf("\nDigite a nota 1 do aluno %d: ", aluno);
    scanf("%f", &nota1);
    printf("Digite a nota 2 do aluno %d: ", aluno);
    scanf("%f", &nota2);
    printf("Digite a nota 3 do aluno %d: ", aluno);
    scanf("%f", &nota3);
    printf("Digite a nota 4 do aluno %d: ", aluno);
    scanf("%f", &nota4);
    media = (nota1+nota2+nota3+nota4)/4;
    aluno++;
    printf("A media do aluno %d e: %.2f", aluno, media);
  }
  return 0;
}