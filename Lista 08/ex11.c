/*Faca um programa que leia uma string de no maximo 100 caracteres. Em seguida, implemente
uma funcao para calcular e mostrar o total de palavras da string lida. Para isso, utilize o
prototipo de funcao a seguir.

int totalPalavras(char ∗str){

} */

#include <stdio.h>

int totalPalavras(char *str){
    int cont  = 1;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            cont++;
        }
    }
    return cont;
}


int main(){
    char string[100];
    printf("Digite uma frase: ");
    gets(string);
    printf("Total de palavras: %d", totalPalavras(string));
}