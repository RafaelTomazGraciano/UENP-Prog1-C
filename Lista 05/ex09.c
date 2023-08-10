/*Faca um programa que receba do usuario um vetor de “n” numeros reais e ordene-os em
ordem crescente. Ao final, o programa deve mostrar o vetor ordenado.*/

#include <stdio.h>

int main(){
  int n, troca, contador = 0, copia, i;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);
  float vetor[n];
  for(i = 0; i < n; i++){
    printf("Digite o valor da posicao %d: ", i);
    scanf("%f", &vetor[i]);
  }
    do{ 
      troca = 0;
      contador++; 
      for(i = 0; i < (n-1); i++){ 
        if(vetor[i] > vetor[i+1]){ 
          copia = vetor[i];
          vetor[i] = vetor[i+1];
          vetor[i+1] = copia;
          troca = 1;
        }
      }
    }while(troca);
    printf("\nApos a ordenacao: Contador: %d\n", contador);
    for(i = 0; i < n; i++){
      printf("%.2f ", vetor[i]);
    }
  return 0;
}