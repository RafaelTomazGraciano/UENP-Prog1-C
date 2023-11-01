/*operacao de atribuicao entre ponteiros*/

#include <stdio.h>

int main(){
    int *p1, *p2;
    int x = 10;
    float y =15;
    p1 =&x;
    printf("%d\n", *p1);
    //atribuicao entre ponteiros
    p2 = p1;
    printf("%d\n", *p2);
    p2 = &y; //nao pode
    return 0;
}