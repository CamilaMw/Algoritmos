/*Desenvolva um programa em C que receba uma String transforme
todas as letras em maiúsculas, copie em outro vetor de caractere de mesmo
tamanho e ao final imprima as duas Strings.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char palavra[100];
    char palavraMaiuscula[100];
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    int tamanho = strlen(palavra);
    int i;
     
    for (i = 0; i < tamanho; i++) {
        palavraMaiuscula[i] = toupper(palavra[i]);
    }
    

    palavraMaiuscula[tamanho] = '\0';
    palavra[tamanho] = '\0';
    
    printf("Palavra original: %s\n", palavra);
    printf("Palavra em maiúsculas: %s\n", palavraMaiuscula);
    
    return 0;
}
