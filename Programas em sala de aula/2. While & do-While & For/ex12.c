/*Programa que caclcula e informa a media de 30 alunos, cada aluno tem 4 notas, deve-se usar o for*/

#include <stdio.h>

int main()
{
  float nota1, nota2, nota3, nota4, media;
  for(int alunos = 1; alunos <= 30; alunos++){
    printf("\nDigite a nota 1 do aluno %d: ", alunos);
    scanf("%f", &nota1);
    printf("Digite a nota 2 do aluno %d: ", alunos);
    scanf("%f", &nota2);
    printf("Digite a nota 3 do aluno %d: ", alunos);
    scanf("%f", &nota3);
    printf("Digite a nota 4 do aluno %d: ", alunos);
    scanf("%f", &nota4);
    media = (nota1 + nota2 + nota3 + nota4)/4;
    printf("\n Nota do aluno %d: %.2f \n", alunos, media);
  }
  return 0;
}