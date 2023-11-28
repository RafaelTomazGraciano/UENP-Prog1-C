/*Faca um programa para cadastrar o cardapio de um restaurante. O programa deve ler um
inteiro n, representando o numero de produtos a serem cadastrados, seguido pelo cadastro
dos n produtos, em que serao lidos para cada produto, o codigo de identificacao, a descricao
do produto e o preco. Em seguida, sao lidos os pedidos. O pedido consiste do codigo do
produto e da quantidade de itens daquele produto que sera pedido. O pedido se encerra
quando o codigo lido  ́e igual a 0. Se o cliente pede um produto nao cadastrado ou uma
quantidade negativa o pedido e considerado invalido.
Ao final, o programa deve calcular quantos itens o cliente escolheu de cada codigo e exibir
o valor que o cliente deve pagar. Pedidos invalidos sao ignorados.*/

#include <stdio.h>

struct produtos
{
    int codigo;
    char descricao[100];
    float preco;
    int quantidade;
};


int main(){
    int n, pedido, quantidade;
    float total;
    printf("Digite a quantidade de produtos que serao cadastrados ");
    scanf("%d", &n);
    struct produtos produto[n];
    for(int i = 0; i < n; i++){
        printf("Digite o codigo do produto: ");
        scanf("%d", &produto[i].codigo);
        setbuf(stdin, NULL);
        printf("Digite a descricao do produto: ");
        fgets(produto[i].descricao, 100, stdin);
        setbuf(stdin, NULL);
        printf("Digite o preco do produto: ");
        scanf("%f", &produto[i].preco);
        produto[i].quantidade = 0;
    }
    printf("\n\nPEDIDO\n\n");
    do{
        printf("Digite o codigo do produto que deseja pedir ou 0 para encerrar\n");
        scanf("%d", &pedido);
        printf("Digite a quantidade do produto: ");
        scanf("%d", &quantidade);
        for(int i = 0; i < n; i++)
            if(produto[i].codigo == pedido)
                produto[i].quantidade += quantidade;
    }while(pedido != 0);
    for(int i = 0; i < n; i++){
        printf("\nCodigo: %d | Descricao: %s",produto[i].codigo, produto[i].descricao);
        printf("Quantidade: %d | Preco: R$%.2f\n",produto[i].quantidade, produto[i].preco);
        total += produto[i].quantidade * produto[i].preco;
    }
    printf("R$%.2f",total);
    return 0;
}