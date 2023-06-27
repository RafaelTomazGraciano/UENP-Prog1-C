/*Faça um programa que calcule e exiba o valor de S, em que S ́e dado por:
S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50 */

#include <stdio.h>

int main(){
  float x = 1,y = 1, S;
  while(x <= 99 && y <= 50){
    S += x/y;
    x = x + 2;
    y++;
  }
  printf("%.2f", S);
  return 0;
}