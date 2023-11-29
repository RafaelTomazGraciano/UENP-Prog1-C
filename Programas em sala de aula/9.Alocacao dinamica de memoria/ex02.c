/*calloc()*/

#include <stdio.h>
#include <stdlib.h>//usado para trabalhar com alocacao dinamica

int main(){
    int *array, i;
    //aloca um array com 20 elementos inteiros
    array  = (int *) calloc(20, sizeof(int));
    if(array == NULL){//verifica se eh possivel alocar memoria
        printf("Erro: memoria insuficiente");
        exit(1);
    }
    for(i = 0; i < 20; i++)
         array[i] = i;
    
    for(i = 0; i < 20; i++)
        printf("%d\n", array[i]);
    return 0;
}