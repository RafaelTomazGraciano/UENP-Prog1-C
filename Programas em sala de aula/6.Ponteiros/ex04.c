/*incremento e decremento, soma e subtacao*/

#include <stdio.h>

int main(){
    char inteiro = 0x3E8;
    char *p = inteiro; //1000;
    printf("%p\n", p);
    p--;

    printf("%p\n", p);
    p = p-2;
    printf("%p\n", p);
    p = p+3;
    printf("%p\n", p);
    return 0;
}