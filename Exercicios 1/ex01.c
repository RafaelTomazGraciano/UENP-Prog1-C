/*Em um evento, existem quatro opcoes de inscricao, conforme mostra a tabela abaixo. 
Faca um programa que receba a inscricao (1, 2, 3, 4) e se e aluno de escola Publica (S- sim ou N- nao),
neste caso aluno oriundo de escola publica tem direito a um desconto de 50% sobre a taxa de inscricao.
O programa devera mostrar:
a) O valor a ser pago por cada aluno;
b) O total arrecadado com os minicursos;
c) O total de alunos matriculados em cada opcao de minicursos*/

#include <stdio.h>

int main(){
  int matricula, inscricao = 0, aluno1 = 0, aluno2 = 0, aluno3 = 0, aluno4 = 0;
  float valor = 0, valorTotal = 0;
  char escola, resposta;
  printf("    Opcoes de inscricao                 Valor     \n");
  printf(" 1. Inscricao + 1 minicurso             50,00     \n");
  printf(" 2. Inscricao + 2 minicursos            65,00     \n");
  printf(" 3. Inscricao + 3 minicursos            80,00     \n");
  printf(" 4. Inscricao + 4 minicurso             95,00     \n");
  do{
  printf("]\nDigite o numero da iscricao e o numero de matricula. \n ");
  scanf("%d%d", &inscricao, &matricula);
  printf("E aluno de escola publica? [S/N]\n");
  scanf(" %c", &escola);
  if(escola == 'S' || escola == 's'){
    switch(inscricao){
      case 1:
      printf("Valor a ser pago: %.2f", valor = 50/2); aluno1++; break;
      case 2:
      printf("Valor a ser pago: %.2f", valor = 65/2); aluno2++; break;
      case 3:
      printf("Valor a ser pago: %.2f", valor = 80/2); aluno3++; break;
      case 4:
      printf("Valor a ser pago: %.2f", valor = 95/2); aluno4++; break;
      default:
      printf("Numero de inscricao desconhecido");
    }
  }
  else{
    switch(inscricao){
      case 1:
      printf("Valor a ser pago: %.2f", valor = 50); aluno1++; break;
      case 2:
      printf("Valor a ser pago: %.2f", valor = 65); aluno2++; break;
      case 3:
      printf("Valor a ser pago: %.2f", valor = 80); aluno3++; break;
      case 4:
      printf("Valor a ser pago: %.2f", valor = 95); aluno4++; break;
      default:
      printf("Numero de inscricao desconhecido");
    }
  }
  valorTotal += valor; 
  printf("\n Deseja continuar? [S/N]\n");
  scanf(" %c", &resposta);
  }while(resposta == 'S' || resposta == 's');
  printf("\nValor total arrecadado: %.2f", valorTotal);
  printf("\n Total de matriculados no curso 1: %d", aluno1);
  printf("\n Total de matriculados no curso 2: %d", aluno2);
  printf("\n Total de matriculados no curso 3: %d", aluno3);
  printf("\n Total de matriculados no curso 4: %d", aluno4);
  return 0;
}