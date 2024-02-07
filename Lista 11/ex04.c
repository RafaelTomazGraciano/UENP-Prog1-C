/*A multiplicacao de dois numeros inteiros pode ser feita atraves de somas sucessivas. Implemente
uma funcao recursiva que calcule a multiplicacao de dois inteiros usando essa ideia.*/

#include <stdio.h>

int multiplicacao(int n1, int n2){
    if( n1 == 0|| n2 == 0){
        return 0;
    }
    if(n1 == 1  || n2 == 1){
        return (n1 > n2) ? n1 : n2;
    }
    return (n2 + multiplicacao(n1 - 1,n2));
}

int main(){
    int n1, n2;
    printf("Digite dois numeros que serao multiplicados\n");
    scanf("%d%d", &n1,&n2);
    printf("Resultado: %d", multiplicacao(n1, n2));
    return 0;
}