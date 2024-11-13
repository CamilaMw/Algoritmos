/* – Codifique, compile e execute um programa em C que crie uma estrutura Endereço com os seguintes 
campos: nome da rua, número, cidade, estado e cep. Em seguida defina uma variável do tipo da estrutura 
Endereço e leia os valores para cada um dos seus campos. Ao final, imprima os valores armazenados em 
cada campo da estrutura na tela.*/

#include <stdio.h>

struct Endereco {
    char nomeRua[100];
    int numero;
    char cidade[100];
    char estado[50];
    char cep[10];
};

int main() {
    
    struct Endereco endereco;

    printf("Digite o nome da rua: ");
    scanf("%99[^\n]%*c", endereco.nomeRua);

    printf("Digite o número: ");
    scanf("%d", &endereco.numero);

    printf("Digite a cidade: ");
    scanf("%99[^\n]%*c", endereco.cidade);

    printf("Digite o estado: ");
    scanf("%49[^\n]%*c", endereco.estado);

    printf("Digite o CEP: ");
    scanf("%9[^\n]%*c", endereco.cep);

    printf("\nValores armazenados na estrutura:\n");
    printf("Nome da rua: %s\n", endereco.nomeRua);
    printf("Número: %d\n", endereco.numero);
    printf("Cidade: %s\n", endereco.cidade);
    printf("Estado: %s\n", endereco.estado);
    printf("CEP: %s\n", endereco.cep);

    return 0;
}
