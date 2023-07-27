/*Uma loja deseja conhecer mais sobre o perfil de seus clientes. Para isso, crie um programa que receba as 
seguintes informações de um cliente: idade, valor da compra e forma de pagamento (P - Pix, C-Cartão). 
A pesquisa deve continuar enquanto a resposta for (S)im. Quando a resposta for (N)ão, a 
pesquisa deve ser encerrada e o programa deve exibir as seguintes informações:

a) A quantidade de vendas realizadas;
b) O total de vendas via pix e cartão;
c) A idade do cliente mais jovem;
d) O valor da maior compra efetuada;
e) A média de compras feitas via pix. */

#include <stdio.h>

int main(){
  int idade, quantidadeVendas = 0, pix = 0, cartao = 0, maisjovem = 1000;
  float valor, maiorCompra = 0, mediaPix, somaPix = 0;
  char pagamento, resposta;
  do{
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite o valor da compra: ");
    scanf("%f", &valor);
    printf("Digite a forma de pagamento [P/C] P = pix e C  = cartao\n");
    scanf(" %c", &pagamento);
    quantidadeVendas++;
    if(pagamento == 'P' || pagamento == 'p'){
      somaPix += valor;
      pix++;
      mediaPix = somaPix/pix;
    }
    else{
      cartao++;
    }
    if(idade < maisjovem){
      maisjovem = idade;
    }
  if(maiorCompra < valor){
    maiorCompra = valor;
  }
  printf("\nDeseja continuar? [S/N]\n");
  scanf(" %c", &resposta);
  }while(resposta == 'S' || resposta == 's');
  printf("\n Quantidade de vendas realizadas: %d", quantidadeVendas);
  printf("\nTotal de vendas Pix: %d || Total de vendas cartao: %d", pix, cartao);
  printf("\n Idade cliente mais jovem: %d", maisjovem);
  printf("\n Valor da maior compra: %.2f", maiorCompra);
  printf("\nMedia de compra via Pix: %.2f", mediaPix);
  return 0;
}

