 /*Faça um programa em C que receba uma String e verifique se ela é um
Palíndromo
OBS-Palíndromo é uma palavra, frase ou número que permanece igual quando lida de trás para diante.*/

#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, j;
    int palindromo = 1;
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    int tamanho = strlen(palavra);
    
    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        if (palavra[i] != palavra[j]) {
            palindromo = 0;
            break;
        }
    }
    
    if (palindromo) {
        printf("A palavra é um palíndromo!\n");
    } else {
        printf("A palavra não é um palíndromo!\n");
    }
    
    return 0;
}



 