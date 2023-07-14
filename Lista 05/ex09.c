/*Faca uma funcao que receba uma determinada hora expressa no formato de horas, minutos e
segundos e, em seguida, transforme no valor correspondente em segundos.*/

#include <stdio.h>

int func(int a, int b, int c){
  int resultado = (a * 3600)+ (b * 60) + c;
  return resultado;
}

int main(){
  int horas, minutos, segundos;
  printf("Digite a quantidade de horas: ");
  scanf("%d",&horas);
  printf("Digite a quantidade de minutos: ");
  scanf("%d", &minutos);
  printf("Digite a quantidade de segundos: ");
  scanf("%d", &segundos);
  printf("%d segundos", func(horas, minutos, segundos));
  return 0;
}