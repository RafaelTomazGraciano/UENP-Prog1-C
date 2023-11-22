/*ponteiros e estruturas*/

#include <stdio.h>

struct ponto
{
    int x;
    int y;
};

typedef struct ponto ponto;

//passagem por valor
void imprime(struct ponto p){
    printf("%d, %d\n", p.x, p.y);
}

//passagem por referencia
void insere(struct ponto *p){
    scanf("%d %d", &p->x, &p->y);
}

//retornando uma estrutura
struct ponto insert(void){
    struct ponto p;
    scanf("%d %d", &p.x, &p.y);
    return p;
}

int main(){
    ponto p;
    ponto *pp = &p;
    (*pp).x = 3;
    (*pp).y = 4;
    printf("x: %d, y: %d\n", p.x, p.y);
    printf("Coordenada (%d, %d)\n", *pp);
    /*forma simplificada*/
    pp -> x = 5;
    pp -> y = 6;
    printf("x: %d, y: %d\n", p.x, p.y);
    insere(pp);
    imprime(p);
    p = insert();
    imprime(p);
    return 0;
}