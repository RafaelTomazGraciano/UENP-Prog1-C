/*Implemente uma funcao recursiva que retorne verdadeiro quando a string dada e um
palındromo. Palındromo e uma palavra que e identica quando a lemos de frente para tras
e tambem de tras para frente. Por exemplo, a palavra “arara” e um palındromo. Ja a
palavra “casa” nao e um palındromo.*/

#include <stdio.h>
#include <string.h>


int palindromo(char palavra[], int tam, int posicao) {

    if (posicao < tam / 2){
        if (palavra[posicao] == palavra[tam - posicao - 1]){
            return 1 * palindromo(palavra, tam, posicao+1);
        }
        else{
            return 0;
        }
    }
    else{
        return 1;
    }
}

int main(){
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%99s", palavra);
    int tam = strlen(palavra);
    if(palindromo(palavra, tam, 0)){
        printf("A palavra e um palindromo");
    }
    else{
        printf("A palavra nao e um palindromo");
    }
}