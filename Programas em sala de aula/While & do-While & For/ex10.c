/*imprime numeors intereiros dentro de um intervalo*/

#include <stdio.h>

int main(){
  int x, y ,n;
  scanf("%d%d",&x,&y);
  for(n = x+1; n < y; n++){
    printf("%d\n", n);
  }
  return 0;
}