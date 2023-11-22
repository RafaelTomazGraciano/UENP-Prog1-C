/*leitura padrao com fgets e gets*/

# include <stdio.h>

int main(){

char frase[16];

printf("Digite uma frase: ");
fgets(frase, 16, stdin); // usando fgets
setbuf(stdin, NULL);
printf("%s\n", frase);

printf("Digite uma frase novamente: ");
gets(frase); // usando gets

printf("%s\n", frase);
return 0;
}