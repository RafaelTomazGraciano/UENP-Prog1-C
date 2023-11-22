/*incremento e decremento, soma e subtacao*/

#include <stdio.h>

int main(){
    int inteiro = 1000;
    int *p = &inteiro; //1000;
    printf("%p\n", p);
    p++;

    printf("%p\n", p);
    p = p+3;
    printf("%p\n", p);
    p = p-3;
    printf("%p\n", p);
    return 0;
}