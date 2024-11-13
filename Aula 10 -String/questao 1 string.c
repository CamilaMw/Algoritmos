/*Faça um programa em C que lê três palavras do teclado e imprime as três palavras na ordem inversa.*/

#include <stdio.h>
#include <string.h>
#include<stdlib.h>


int main() {
    char palavra1[50],palavra2[50],palavra3[50];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    printf("Digite a terceira palavra: ");
    scanf("%s", palavra3);

    printf("Palavras na ordem inversa:\n");
    printf("%s\n", palavra3);
    printf("%s\n", palavra2);
    printf("%s\n", palavra1);

    return 0;
}
