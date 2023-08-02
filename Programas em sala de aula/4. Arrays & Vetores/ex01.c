/*imprime quantas vezes x apareceu em um vetor de 10 elementos*/

#include <stdio.h>

int main(){
  int vet[10], i, x, count = 0;
  // le os numeros e armazena no array
  for(i = 0; i < 10 ; i++){
    scanf("%d", &vet[i]);  
  }
  //numero a ser procurado
  printf("Digite um numero x: ");
  scanf("%d", &x);
  // procura
  for(i = 0; i < 10; i++){
    if (vet[i] == x){
      ++count;
    }
}
  printf("%d apareceu %d vezes \n", x, count);
  return 0;
}