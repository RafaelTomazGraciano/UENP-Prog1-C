/*Indique quais as saıdas produzidas pelo programa a seguir. Faca o teste de mesa de cada
instrucao e verifique os resultados. Depois, voce pode executar o codigo comparando os
resultados.

 #include <stdio.h>

 int main ( ) {
    int x , y = 2 7;
    int ∗ pt1 = &x ;
    int ∗ pt2 = &y ;
    int ∗∗ ppt = &pt1 ;
    ∗∗ ppt = ∗ pt2 ;
    (∗ pt2 )++;
    x−−;
    printf ( "%d %d\n" , ∗pt1 , ∗ pt2 ) ;
    (∗∗ ppt ) += −−(∗pt2 ) ;
    printf ( "%d\n" , ∗∗ ppt ) ;
    printf ( "%d %d\n" , x , y ) ;
    printf ( "%d\n" , pt1 == &y ) ;
    printf ( "%d\n" , &x != pt2 ) ;
    return 0 ;
 }*/

#include <stdio.h>

int main (){
    int x, y = 27; // x não tem valor y é igual a 27
    int *pt1 = &x ; // pt1 aponta para o valor de x
    int *pt2 = &y ; // pt2 aponta para o valor de y
    int **ppt = &pt1 ; // **ppt recebe o endereço de pt1, assim ppt pode modificar o valor de x
    **ppt = *pt2 ; // **ppt aponta para o ponteiro aponta para *pt2, neste caso *ppt aponta para y, com isso x também passa a ser 27
    (*pt2)++; // o valor apontado para pt2 é incrementado
    x--; // o valor de x é decrescido
    printf ( "%d %d\n" , *pt1 , *pt2 ) ; // é printado o valor apontado para o ponteiro pt1 e o pt2
    (**ppt ) += --(*pt2 ) ; // o valor apontado para ppt é 26 e o pt2 é igual a 28, ocorre um decrescimo e uma soma 26+27=53
    printf ( "%d\n" , **ppt ) ; // é printado o valor de ppt que é 53
    printf ( "%d %d\n" , x , y ) ; // é printado o valor de x e y, o valor de x agora é 53, por conta do '**ppt' que está apontando para x, e y continua sendo 27
    printf ( "%d\n" , pt1 == &y ) ; // é printado '0', pois o endereço de pt1 é diferente do endereco de y
    printf ( "%d\n" , &x != pt2 ) ; // é printado '1', pois o endereço de x é diferente do endereço de pt2
    return 0 ;
}