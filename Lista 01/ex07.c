/*Uma maquina automatica de cafe so funciona com notas de R$ 5 e nunca da o troco. O
cafe custa R$ 7. Assim, se o cliente pedir apenas um cafe, ele vai perder R$ 3, pois tera
que dar R$ 10, e a maquina nao devolvera o troco. E possıvel comprar mais de um cafe 
em uma so compra. Logo, se o cliente colocou R$ 15, significa que ele vai obter dois cafes e
perdera R$ 1. Faca um programa que leia o valor que o cliente colocou na maquina (sempre
multiplo de 5) e imprima quanto o cliente ira perder no troco.*/

# include <stdio.h>

int main()
{
    int valorRecebido, precoCafe=7, quantidadeCafes;
    printf("O preco do cafe e R$7,00\n a maquina so aceita R$5,00\n");
    printf("Isira o dinheiro: ");
    scanf("%d",&valorRecebido);
    quantidadeCafes = valorRecebido/7;
    printf("Voce recebera %d cafes!\n",quantidadeCafes);
    printf("A maquina nao devolve troco, o valor que seria devolvido e: R$%d,00",valorRecebido%precoCafe);
    return 0;
}

