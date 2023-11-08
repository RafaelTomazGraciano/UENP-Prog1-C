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
    int x, y = 27;
    int *pt1 = &x ;
    int *pt2 = &y ;
    int **ppt = &pt1 ;
    **ppt = *pt2 ;
    (*pt2 )++;
    x--;
    printf ( "%d %d\n" , *pt1 , *pt2 ) ;
    (**ppt ) += --(*pt2 ) ;
    printf ( "%d\n" , **ppt ) ;
    printf ( "%d %d\n" , x , y ) ;
    printf ( "%d\n" , pt1 == &y ) ;
    printf ( "%d\n" , &x != pt2 ) ;
    return 0 ;
}