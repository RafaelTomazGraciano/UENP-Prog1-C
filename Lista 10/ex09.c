/*Implemente um programa que leia uma string alocada dinamicamente e inverta seu conteudo.
Por exemplo, se a string for “alocacao dinamica em c” entao devera ser impresso “c me
acimanid oacacola”.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *string = (char *) malloc(100 * sizeof(char *));
    printf("Digite uma frase: ");
    fgets(string, 255, stdin);
    setbuf(stdin, NULL);
    printf("Frase invertida: %s", strrev(string));
    return 0;
}