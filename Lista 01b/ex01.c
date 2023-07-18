/*Implemente um programa que leia as variaveis a, b e c e imprima os valores das quatros
formulas seguintes:
a) (a ∗ b)/c
b) a²+b+5*c
c) (a*b*c+b)+(c/3)*5-1
d) (a*b*c)³/2 */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("\nDigite o valor de b: ");
    scanf("%f", &b);
    printf("\nDigite o valor de c: ");
    scanf("%f", &c);

    // Formula letra a

    printf("\n O resultado da formula a e : %.2f", (a*b)/c);

    // Formula letra b

    printf("\n O resultado da formula b e: %.2f", a*a+b+5*c);

    // Formula letra c

    printf("\n O resultado da formula c e: %.2f", (a*b*c+b)+(c/3)*5-1);

    // Formula letra d

    printf("\n O resultado da formula d e: %.2f", pow ((a*b*c),3)/2);
    return 0;
}
