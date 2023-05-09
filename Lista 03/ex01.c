/*Faça um programa que receba como entrada um caractere e informe se ele ́e uma vogal ou
não.*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    letra = tolower(letra);
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        printf("\n Este caractere e uma vogal"); 
    }
    else{
        printf("\n Este caractere e uma consoante");
    }
    return 0;
}