/*identificando as saidas*/

#include <stdio.h>

int main(){
    int *p1, *p2;
    int x = 5, y = 15;
    p1 = &x;
    p2 = &y;
    *p1 = 10;
    *p2 = *p1;
    p1 = p2;
    *p1 = 20;
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d %d \n", *p1, *p2);
    return 0;
}