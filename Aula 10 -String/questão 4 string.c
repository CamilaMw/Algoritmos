#include <stdio.h>
/*Reescreva novamente o programa da questão 2 para
que seja exibido a quantidade de vogais e a quantidade de
consoantes da palavra “batatinha”.*/

#include <stdlib.h>
#include <string.h>

int main() {
    char palavra[] = "batatinha";
    int tamanho = strlen(palavra);
    int i;
    int contadorVogais = 0;
    int contadorConsoantes = 0;

    printf("Palavra: %s\n", palavra);

    for (i = 0; i < tamanho; i++) {
        char letra = palavra[i];
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            contadorVogais++;
        } else {
            contadorConsoantes++;
        }
    }

    printf("Quantidade de vogais: %d\n", contadorVogais);
    printf("Quantidade de consoantes: %d\n", contadorConsoantes);

    return 0;
}
