/*Reescreva o programa abaixo usando ponteiros.
 #include <s t d i o . h>
 #def ine MAX 255

 int main ( ) {
    char s t r [MAX] , c a r a c t e r e ;
    int count = 0 ;

    p r i n t f ( "Entre com a string: " ) ;
    f g e t s ( s t r , MAX, s t di n ) ;
    p r i n t f ( "Entre com o caractere : " ) ;
    s c a n f ( " %c" , &c a r a c t e r e ) ;

    for ( int i = 0 ; s t r [ i ] != ’\0’ ; i++) {
        i f ( s t r [ i ] == c a r a c t e r e ) {
            p r i n t f ( "%d\n" , i ) ;
            count++;
        }
    }
    i f ( count == 0 )
        p r i n t f ( " -1\n" ) ;
    return 0 ;
 }*/

    #include <stdio.h>
    #define MAX 255

int main(){
    char str[MAX], caractere, *ps, *pc;
    int count = 0, *pcount;
    printf("Entre com a string: ");
    fgets(str, MAX, stdin);
    ps = str;
    printf("Entre com o caractere: ");
    scanf(" %c", &caractere);
    pc = &caractere;
    for(int i = 0; ps[i] != '\0'; i++){
        if(ps[i] == *pc){
            printf("%d\n", i);
            count++;
        }
    }
    pcount = &count;
    if(*pcount == 0)
        printf("-1\n");
    return 0;
}
    