/*Elabore um programa em C que leia duas Strings. Se as Strings forem
iguais escreva “Strings iguais”. Caso contrário, concatene (junte) as duas
Strings e imprima a String resultante*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    
    printf("Digite a primeira palavra: ");
    scanf("%s", str1);

    printf("Digite a segunda palavra: ");
    scanf("%s", str2);
    
    if (strcmp(str1, str2) == 0) {
        printf("Strings iguais\n");
    } else {
        char resultado[200];
        strcpy(resultado, str1);
        strcat(resultado, str2);
        
        printf("Juntando as palavras: %s\n", resultado);
    }
    
    return 0;
}
