/*O  ́ındice de massa corporal (IMC)  ́e usado para identificar o peso ideal de uma pessoa. Ele
 ́e calculado dividindo a massa pelo quadrado da altura. Por exemplo, suponha que uma
pessoa tenha 1,81m de altura e 77kg de massa. O IMC seria:

77/1.81²~23.50

Implemente um programa em C que, dada a massa e altura de uma pessoa, imprima o seu
IMC.*/

#include <stdio.h>

int main()
{
    float massa, altura;
    printf("Digite o valor de sua massa corporal em Kg: ");
    scanf("%f", &massa);
    printf("Digite o valor da sua altura em metros: ");
    scanf("%f", &altura);
    printf("O seu IMC e: %.2f", massa/(altura*altura));
    return 0;
}