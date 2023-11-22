/*incremento e decremento*/

/*incremento e decremento, soma e subtacao*/

#include <stdio.h>

int main(){
    int x, y, *p;
    y = 0;
    p = &y;
    x = *p;
    printf("%d\n", x);
    (*p)++;
    printf("%d\n", y);
    x = 4;
    (*p) += x;
    printf("%d\n", y);
    return 0;
}