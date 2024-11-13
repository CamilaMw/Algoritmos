/*Codifique, compile e execute um programa em C que realize o cadastro de computadores de uma 
empresa com as seguintes informações: marca, ano de fabricação e peso. Faça o cadastramento de 3 
computadores. Em seguida, imprima as informações de cada computador na tela. */

#include <stdio.h>

struct Computador {
    char marca[50];
    int anoFabricacao;
    float peso;
};


int main() {
    struct Computador computadores[3];

    for (int i = 0; i < 3; i++) {
        printf("Cadastro do computador %d:\n", i+1);

        printf("Digite a marca: ");
        fgets(computadores[i].marca, 50, stdin);

        printf("Digite o ano de fabricação: ");
        scanf("%d", &computadores[i].anoFabricacao);

        printf("Digite o peso: ");
        scanf("%f", &computadores[i].peso);


        while (getchar() != '\n');

        printf("\n");
    }

    printf("Informações dos computadores cadastrados:\n");

    for (int i = 0; i < 3; i++) {
        printf("Computador %d:\n", i+1);
        printf("Marca: %s", computadores[i].marca);
        printf("Ano de Fabricação: %d\n", computadores[i].anoFabricacao);
        printf("Peso: %.2f\n", computadores[i].peso);
        printf("\n");
    }

    return 0;
}


 