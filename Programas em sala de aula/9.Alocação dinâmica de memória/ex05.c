/*alocao de memoria com matriz*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int **p;
    // aloca um array de ponteiros, um para cada linha
    p = (int **) malloc(4 * sizeof(int *));
    // cada um dos ponteiros recebera um array de inteiros
    for(int i = 0; i < 4; i++)
        p[i] = (int *) malloc(3 * sizeof(int));

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &p[i][j]);
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    //desalocando memoria
    for(int i = 0; i < 4; i++)
        free(p[i]);
    free(p);
    return 0;
}