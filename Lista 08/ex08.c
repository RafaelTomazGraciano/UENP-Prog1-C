/*Utilizando aritmetica de ponteiros, mostre como exibir a frase “nao gosto de programar em
C” como “gosto de programar em C”.*/

#include <stdio.h>

int main(){
    char frase[] = "nao gosto de programar em C";
    for(char *ptr = frase+4; *ptr != '\0'; ptr++){
        printf("%c", *ptr);
    }
    return 0;
}