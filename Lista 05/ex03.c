/*Faca um programa para calcular as raızes da equacao de 2o grau. O programa recebe como
entrada os numeros a, b, c, que correspondem aos coeficientes da equacao de segundo grau.
Em seguida, o programa deve mostrar as raızes da equacao. Caso
as raızes nao existam, uma mensagem deve ser exibida (por exemplo, “Nao existem raızes
reais”). Caso a equacao nao seja de segundo grau, uma mensagem tambem deve ser exibida
(por exemplo, “Nao e uma equacao de segundo grau”).
Para isso, implemente funcoes para calcular e retornar o valor de delta e para calcular e
retornar os valores das raizes x1 e x2 da equacao.*/

#include <stdio.h>
#include <math.h>

float delta(int a, int b, int c){
  float delta;
  delta = sqrt((b*b)-(4*a*c));
  return delta;
}
float raiz1(float Xa, int a, int b, int c){
  Xa = (-b+delta(a,b,c))/(2*a);
  return Xa;
}
float raiz2(float Xb, int a, int b, int c){
  Xb = (-b-delta(a,b,c))/(2*a);
    return Xb;
}

int main(){
  int a, b, c;
  float Xa, Xb;
  do{
    printf("Digite o valor de a: ");
    scanf("%d",&a);
    printf("Digite o valor de b: ");
    scanf("%d",&b);
    printf("Digite o valor de c: ");
    scanf("%d",&c);
    if(a == 0){
      printf("Esta nao e uma equacao de segundo grau\n");
    }
  }while(a == 0);
  printf("Resultado de delta %2.f \n",delta(a,b,c));
  printf("A raiz e %.2f", raiz1(Xa,a,b,c));
  printf("\nA raiz e %2.f", raiz2(Xb,a,b,c));
  return 0;
}