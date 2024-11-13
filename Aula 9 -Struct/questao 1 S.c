/*Codifique, compile e execute um programa em C que crie uma estrutura Hora com os seguintes campos: 
hora, minuto e segundo. Em seguida defina uma variável do tipo da estrutura Hora e leia os valores para 
cada campo da estrutura na tela. */

#include <stdio.h>

struct Hora {
    int hora;
    int minuto;
    int segundo;
};

int main()
{
    struct Hora hora;

    printf("Digite a hora: ");
    scanf("%d", &hora.hora);

    printf("Digite o minuto: ");
    scanf("%d", &hora.minuto);

    printf("Digite o segundo: ");
    scanf("%d", &hora.segundo);

    printf("Hora digitada: %02d:%02d:%02d\n", hora.hora, hora.minuto, hora.segundo);

    return 0;
}
