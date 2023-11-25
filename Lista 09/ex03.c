/*Uma empresa precisa de um banco de dados para armazenar os dados dos usuarios de sua
rede social. Inicialmente o programa deve receber a quantidade de usuarios que deseja
cadastrar. Em seguida, as seguintes informacoes devem ser guardadas para cada usuario:
• Idade;
• Nome;
• Sexo (m - masculino, f - feminino);
• Estado civil (s - solteiro, c - casado, n - namorando, d - divorciado);
• Quantidade de amigos;
• Quantidade de fotos que estao no perfil.
Ao final, o programa deve exibir as informacoes de todos os usuarios, na sequencia em que
eles foram adicionados.*/

#include <stdio.h>

struct dados
{
    int idade;
    char nome[50];
    char sexo;
    char estadocivil;
    int quantidadeamigos;
    int quantidadefotos;
};


int main(){
    int n;
    printf("Digite a quantidade de usuarios que deseja cadastrar: ");
    scanf("%d", &n);
    struct dados dado[n];
    for(int i = 0; i < n; i++){
        printf("DADOS DO USUARIO %d\n", i);
        printf("Digite a idade: ");
        scanf("%d", &dado[i].idade);
        setbuf(stdin, NULL);
        printf("Digite o nome: ");
        fgets(dado[i].nome, 50, stdin);
        setbuf(stdin, NULL);
        printf("Digite o sexo [m/f]: ");
        dado[i].sexo = getchar();
        setbuf(stdin, NULL);
        printf("Digite o estado civil [s, c, n, d]: ");
        dado[i].estadocivil = getchar();
        setbuf(stdin, NULL);
        printf("Digite a quantidade de amigos: ");
        scanf("%d", &dado[i].quantidadeamigos);
        printf("Digite a quantidade de fotos: ");
        scanf("%d", &dado[i].quantidadefotos);
        setbuf(stdin, NULL);
    }
    for(int i = 0; i < n; i++){
        printf("\nDADOS DO USUARIO %d\n", i);
        printf("Idade: %d\n", dado[i].idade);
        printf("Nome: %s", dado[i].nome);
        printf("Sexo: %c\n", dado[i].sexo);
        printf("Estado civil: %c\n", dado[i].estadocivil);
        printf("Quantidade de amigos: %d\n", dado[i].quantidadeamigos);
        printf("Quantidade de fotos: %d\n", dado[i].quantidadefotos);
    }
}