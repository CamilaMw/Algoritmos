/* Codifique, compile e execute um programa em C que crie uma estrutura Pessoa com os seguintes 
campos: nome, sexo, peso, data de nascimento e endereço. Em seguida defina uma variável do tipo da 
estrutura Pessoa e leia os valores para cada um dos seus campos. Ao final, imprima os valores armazenados 
em cada campo da estrutura na tela. 
Obsimp: Crie uma nova estrutura para Data e utilize a estrutura Endereço implementada no exercício 
anterior (Questão 2)*/

 #include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Endereco {
    char rua[50];
    int numero;
    char cidade[50];
    char estado[50];
    char cep[10];
};

struct Pessoa {
    char nome[50];
    char sexo;
    float peso;
    struct Data dataNascimento;
    struct Endereco endereco;
};

int main() {
    struct Pessoa pessoa;

    printf("Digite o nome: ");
    fgets(pessoa.nome, 50, stdin);

    printf("Digite o sexo (M/F): ");
    scanf("%c", &pessoa.sexo);

    printf("Digite o peso: ");
    scanf("%f", &pessoa.peso);

    printf("Digite a data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &pessoa.dataNascimento.dia, &pessoa.dataNascimento.mes, &pessoa.dataNascimento.ano);

    printf("Digite o nome da rua: ");
    fgets(pessoa.endereco.rua, 50, stdin);

    printf("Digite o número: ");
    scanf("%d", &pessoa.endereco.numero);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", pessoa.endereco.cidade);

    printf("Digite o estado: ");
    scanf(" %[^\n]", pessoa.endereco.estado);

    printf("Digite o CEP: ");
    scanf(" %[^\n]", pessoa.endereco.cep);

    printf("\nValores armazenados na estrutura Pessoa:\n");
    printf("Nome: %s", pessoa.nome);
    printf("Sexo: %c\n", pessoa.sexo);
    printf("Peso: %.2f\n", pessoa.peso);
    printf("Data de Nascimento: %02d/%02d/%04d\n", pessoa.dataNascimento.dia, pessoa.dataNascimento.mes, pessoa.dataNascimento.ano);
    printf("Endereço:\n");
    printf("Rua: %s", pessoa.endereco.rua);
    printf("Número: %d\n", pessoa.endereco.numero);
    printf("Cidade: %s\n", pessoa.endereco.cidade);
    printf("Estado: %s\n", pessoa.endereco.estado);
    printf("CEP: %s\n", pessoa.endereco.cep);

    return 0;
}
