/*solucao usando ponteiros*/

void troca (int *x, int *y){
    int aux = *x; //aux = 5
    *x = *y; //a = 3
    *y = aux; //b = 5
}

#include <stdio.h>

int main(){
    int a = 5, b = 3;
    /*chama a funcao e passa os enderecos de a e b e nao as copias de seus valores (usa o operador &)*/

    troca(&a,&b);
    printf("%d %d", a, b);
}