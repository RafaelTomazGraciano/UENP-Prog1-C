/*Um escritorio de contabilidade deseja realizar o reajuste do salario dos funcionarios de todos
os seus clientes. Neste caso, sera utilizado como base o reajuste acordado com os sindicatos
de cada categoria, conforme especificado na Tabela 2. Faca um programa que receba o
salario atual, o cargo e calcule o reajuste do salario. O programa deve mostrar o valor do
reajuste e o salario ja atualizado.

                  Tabela 2: Faixa de aumento de sal ́arios
                  Codigo                     Cargo                 Reajuste
                     1                     Vendedor(a)              10%
                     2                 Auxiliar de escritorio       7%
                     3                 Auxiliar de Enfermagem       12%
                     4                   Bibliotecario(a)           11%            */

#include <stdio.h>

int main()
{
   int codigo;
   float salario;
   printf("Digite o valor do seu salario atual: R$ ");
   scanf("%f", &salario);
   printf("      Codigo       |            Cargo                |      Reajuste \n");
   printf("        1          |           Vendedor              |        10%%   \n");
   printf("        2          |     Auxiliar de escritorio      |        7%%   \n");
   printf("        3          |     Auxiliar de enfermagem      |        12%%   \n");
   printf("        4          |        Bibliotecario(a)         |        11%%   \n");
   printf("Digite o numero do codigo: ");
   scanf("%d", &codigo);

   switch(codigo){
      case 1:
         printf("\n O seu cargo e Vendedor, seu reajuste e de 10%%, portanto seu novo salario e R$%.2f",salario*1.1);break;
      case 2:
         printf("\n O seu cargo e Auxiliar de escritorio, seu reajuste e de 7%%, portanto seu novo salario e R$%.2f",salario*1.07);break;
      case 3:
         printf("\n O seu cargo e Auxiliar de enfermagem, seu reajuste e de 12%%, portanto seu novo salario e R$%.2f",salario*1.12);break;
      case 4:
      printf("\n O seu cargo e Bibliotecario, seu reajuste e de 11%%, portanto seu novo salario e R$%.2f",salario*1.11);break;
      default:
      printf("\n Codigo desconhecido");
   }
   return 0;
}