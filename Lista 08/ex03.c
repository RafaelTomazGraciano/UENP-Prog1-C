/*Analise a sequencia de instrucoes a seguir:

  int x = 1 0 , y = 5 ;
  int ∗ p t r 1 = &x ;
  int ∗ p t r 2 = &y ;

Quais express ̃oes abaixo sao validas e quais nao sao validas? Justifique sua resposta.

(a) y = ptr1 == ptr2;

(b) ptr1 += ptr2;

(c) x = (*ptr1) - (*ptr2);

(e) x = ptr1 || ptr2;

(e) y = (*ptr2)++;*/

#include <stdio.h>

int main(){
    int x = 10 , y = 5 ;
    int *ptr1 = &x ;
    int *ptr2 = &y ;

    y = ptr1 == ptr2; // isso é válido, porque vai haver a comparação e y será 0 ou 1;
    printf("%d\n", y);

    //ptr1 += ptr2; // isso é inválido, porque não se pode somar dois endereços;
    printf("%d\n", ptr1);

    x = (*ptr1) - (*ptr2); //isso é válido, porque você está fazendo a subtração de valores e não de endereços;
    printf("%d\n", x);

    x = ptr1 || ptr2; // isso é válido, é parecido com a letra A, no caso da letra A é a operação AND e neste caso é a operação OR;
    printf("%d\n", x);

    y = (*ptr2)++; //isso e válido, neste caso estamos pegando o valor do ponteiro e depois somado;
    printf("%d\n", y);

    return 0;
}