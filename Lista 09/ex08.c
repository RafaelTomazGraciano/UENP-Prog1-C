/*Faca um programa para gerenciar a ficha de registro de passageiros de onibus de uma
empresa. Os onibus possuem 44 lugares numerados de 1 a 44. O programa deve ler
uma lista de registro de passageiros, com o numero da passagem, data, de (origem), para
(destino), horario, poltrona, idade e nome do passageiro. A entrada termina quando o valor
do numero da passagem for −1.
Ao final, o programa deve exibir o nome de todos os passageiros que estiverem acima da
media das idades e que estiverem sentados nas poltronas pares.*/

#include <stdio.h>
#define MAX 44

struct data
{
    int dia;
    int mes;
    int ano;
    int hora;
    int minuto;
};

struct registro
{
    int numero;
    struct data data;
    char origem[100];
    char destino[100];
    int poltrona;
    int idade;
    char nome[100];
};


int main(){
    struct registro registros[MAX];
    float media = 0;
    for(int i = 0; i < MAX; i++){
        printf("Digite o numero da passagem ou -1 para encerrar\n");
        scanf("%d", &registros[i].numero);
        if (registros[i].numero == -1)
            break;
        printf("Digite o dia: ");
        scanf("%d", &registros[i].data.dia);

        printf("Digite o mes: ");
        scanf("%d", &registros[i].data.mes);

        printf("Digite o ano: ");
        scanf("%d", &registros[i].data.ano);

        printf("Digite a hora: ");
        scanf("%d", &registros[i].data.hora);

        printf("Digite o minuto: ");
        scanf("%d", &registros[i].data.minuto);
        setbuf(stdin, NULL);

        printf("Digite a origem: ");
        fgets(registros[i].origem, 100, stdin);
        setbuf(stdin, NULL);

        printf("Digite o destino: ");
        fgets(registros[i].destino, 100, stdin);
        setbuf(stdin, NULL);

        printf("Digite o numero da poltrona: ");
        scanf("%d", &registros[i].poltrona);

        printf("Digite a idade: ");
        scanf("%d", &registros[i].idade);
        setbuf(stdin, NULL);

        printf("Digite o nome: ");
        fgets(registros[i].nome, 100, stdin);
        setbuf(stdin, NULL);
    } 
    for(int i = 0; i < MAX; i++)
        media += registros[i].idade; 
    media = media/MAX;
    printf("\n\nMedia das idades: %.2f", media);
    printf("\nNome dos passageiros com idade acima da mdia sentados em poltronas pares:\n");
    for(int i = 0; i < MAX; i++){
        if(registros[i].idade > media && registros[i].poltrona % 2 == 0){
            printf("%s",registros[i].nome);
        }
    }
    return 0;
}