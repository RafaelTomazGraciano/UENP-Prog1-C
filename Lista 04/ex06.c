/*Implemente uma funcao que receba como parametro o peso (em quilos) e a altura (metros)
de uma pessoa, calcule e retorne o seu IMC (Indice de Massa Corporal), cujo calculo e dado
por: IMC = peso/(altura * altura). Implemente outra funcao que receba como parametro
o IMC de uma pessoa e a classifique
          Tabela de classificacao IMC
  Condicao                   IMC em Adultos
Abaixo do peso                 < 18,5
  Peso normal               18,5 ≤ IMC ≤ 24,9
  Sobrepeso                 25 ≤ IMC ≤ 29,9
  Obeso                         ≥ 30  */

  #include <stdio.h>

  float imc(float p, float a){
    float imc = p/(a*a);
    return imc;
  }
  void classificacao(float imc){
    if(imc < 18.5){
      printf("Abaixo do peso");
    }
    else if(18.5 <= imc && imc <= 24.9){
      printf("Peso normal");
    }
    else if(25 <= imc && imc <= 29.9){
      printf("Sobrepeso");
    }
    else{
      printf("Obeso");
    }
  }

  int main(){
    float peso, altura;
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("\n%.2f\n",imc(peso,altura));
    classificacao(imc(peso, altura));
  return 0;
}