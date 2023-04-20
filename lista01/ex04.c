/*Faca um programa que receba uma determinada hora expressa no formato de horas, minutos
e segundos e, em sequida, transforme no valor correspondente em segundos.*/

#include <stdio.h>

int main()
{
    int horas, minutos, segundos;
    printf("Digite as horas: ");
    scanf("%i",&horas);
    printf("Digite os minutos: ");
    scanf("%i",&minutos);
    printf("Digite os segundos: ");
    scanf("%i",&segundos);
    printf("Total de segundos e: %i",horas*3600+minutos*60+segundos);
    return 0;
}