/*Implemente uma funcao que receba como parametro 2 notas e uma opcao correspondendo
ao calculo da media. Caso a opcao seja a letra “a”, deve ser calculada a media aritmetica;
caso a opcao seja a letra “p”, deve ser calculada a media ponderada (pesos 3 e 2); caso a
opcao seja a letra “h”, deve ser calculada a media harmonica. Retorne a media devidamente
calculada para o programa principal.*/

#include <stdio.h>

float media(float x, float y){
  char codigo;
  printf("    Opcoes                   Codigo        \n");
  printf(" media aritmetica               a          \n");
  printf(" media ponderada                p          \n");
  printf(" media harmonica                h          \n");
  printf("Escolha uma das opcoes\n ");
  scanf(" %c", &codigo);
  switch(codigo){
    case 'a':
    printf("\n A media aritmetica das notas e: %.2f", (x+y)/2);
    break;
    case 'p':
    printf("\n A media ponderada das notas e %.2f", ((x*3)+(y*2))/5);
    break;
    case 'h':
    printf("\n A media harmonica das notas e %2.f", 2/((1/x)+(1/y)));
    break;
    default:
    printf("\n Codigo desconhecido");
    break;
  }
}

int main(){
  float nota1, nota2;
  printf("Digite a nota 1 : ");
  scanf("%f", &nota1);
  printf("Digite a nota 2: ");
  scanf("%f", &nota2);
  media(nota1, nota2);
  return 0;
}