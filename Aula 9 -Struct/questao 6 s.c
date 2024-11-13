/*Defina as estruturas cuja representação gráfica é dada a seguir: 
a- crie um vetor com 7 elementos Cadastro. 
b- permita ao usuário entrar com dados para preencher esse 7 cadastros. 
c- encontre a pessoa com maior idade entre os cadastrados 
d- encontre as pessoas do sexo masculino 
e- encontre as pessoas com salário maior que 1000 
f- imprima os dados da pessoa cuja identidade seja igual à um valor fornecido pelo usuário */

  #include <stdio.h>

struct Endereco {
    char rua[50];
    char bairro[50];
    char cep[10];
    char cidade[50];
    char estado[50];
};

struct Cadastro {
    char nome[50];
    float salario;
    struct Endereco endereco;
    int identidade;
    char cpf[15];
    char estadoCivil[20];
    char telefone[15];
    int idade;
    char sexo;
};

int main() {
    struct Cadastro cadastros[7];
    int i;
    int pessoaMaiorIdade = 0;
    int contadorMasculino = 0;
    int contadorSalarioMaior1000 = 0;
    int identidadeBusca;

    for (i = 0; i < 7; i++) {
        printf("Entre com os dados do cadastro %d:\n", i+1);

        printf("Nome: ");
        scanf(" %[^\n]", cadastros[i].nome);

        printf("Salário: ");
        scanf("%f", &cadastros[i].salario);

        printf("Endereço:\n");
        printf("Rua: ");
        scanf(" %[^\n]", cadastros[i].endereco.rua);

        printf("Bairro: ");
        scanf(" %[^\n]", cadastros[i].endereco.bairro);

        printf("CEP: ");
        scanf(" %[^\n]", cadastros[i].endereco.cep);

        printf("Cidade: ");
        scanf(" %[^\n]", cadastros[i].endereco.cidade);

        printf("Estado: ");
        scanf(" %[^\n]", cadastros[i].endereco.estado);

        printf("Identidade: ");
        scanf("%d", &cadastros[i].identidade);

        printf("CPF: ");
        scanf(" %[^\n]", cadastros[i].cpf);

        printf("Estado Civil: ");
        scanf(" %[^\n]", cadastros[i].estadoCivil);

        printf("Telefone: ");
        scanf(" %[^\n]", cadastros[i].telefone);

        printf("Idade: ");
        scanf("%d", &cadastros[i].idade);

        printf("Sexo (M/F): ");
        scanf(" %c", &cadastros[i].sexo);

        printf("\n");
    }

    for (i = 1; i < 7; i++) {
        if (cadastros[i].idade > cadastros[pessoaMaiorIdade].idade) {
            pessoaMaiorIdade = i;
        }
    }

    
    for (i = 0; i < 7; i++) {
        if (cadastros[i].sexo == 'M' || cadastros[i].sexo == 'm') {
            contadorMasculino++;
        }
    }

    
    for (i = 0; i < 7; i++) {
        if (cadastros[i].salario > 1000) {
            contadorSalarioMaior1000++;
        }
    }

     
    printf("Digite a identidade da pessoa a ser buscada: ");
    scanf("%d", &identidadeBusca);

    return 0;
}

