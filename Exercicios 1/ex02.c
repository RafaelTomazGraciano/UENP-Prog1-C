/*Em um estacionamento rotativo, o cidadao pode parar seu veiculo por ate 2 horas no local,
pagando uma tarifa minima de R$5,00. Caso o cidadao exceda o horario perimtido, 
e cobrado um adiocional de R$3,00 por hora ou fracao excedida. Faca um programa que receba
como entrada a informacao de varios veiculos, incluindo a sua placa e o numero de horas que ele
ficou no local. Em seguida, o programa deve exibir: 
a) a placa de cada veiculo, o numero de horas estacionado e a tarifa paga devidamente calculada;
b) o total arrecadado */

#include <stdio.h>

int main(){
  int placa, horas, minutos;
  float tarifa = 0, totalArrecadado = 0;
  char resposta;
  do{
    printf("Digite a placa: ");
    scanf("%d",&placa);
    printf("Digite a quantidade de horas estacionado: ");
    scanf("%d", &horas);
    printf("Quantidade de minutos estacionado: ");
    scanf("%d", &minutos);
    printf("\nPlaca: %d", placa);
    printf("\nTempo estacinado: %d horas, %d minutos", horas, minutos);
    if(horas < 2){
      printf("\nValor a ser pago: %.2f", tarifa = 5);
    }
    else if (horas == 2 && minutos == 0){
      printf("\n Valor a ser pago: %.2f", tarifa = 5);
    }
    else if(horas >= 2){
      printf("\nValor a ser pago: %.2f", tarifa = (5+ 3*(horas-2) + 0.05*minutos));
    }
    
    totalArrecadado += tarifa; 
    printf("\nDeseja continuar? [S/N]\n");
    scanf(" %c", &resposta);
  }while(resposta == 'S' || resposta == 's');
  printf("\nTotal arrecadado: %.2f", totalArrecadado);
  return 0;
}