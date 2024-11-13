/*Codifique, compile e execute um programa na
linguagem C que armazene todas as letras da palavra
“batatinha”. Em seguida, imprima apenas as vogais*/

#include<stdio.h>
#include<string.h>
#include <stdio.h>
#include <string.h>

#include<stdio.h>
#include<string.h>

int main() {
    char let[10];
    
    let[0] = 'b';
    let[1] = 'a';
    let[2] = 't';
    let[3] = 'a';
    let[4] = 't';
    let[5] = 'i';
    let[6] = 'n';
    let[7] = 'h';
    let[8] = 'a';
    let[9] = '\0';

    int i;
    printf("As vogais são: ");
    for (i = 0; i < strlen(let); i++) {
        if (let[i] == 'a' || let[i] == 'e' || let[i] == 'i' || let[i] == 'o' || let[i] == 'u') {
            printf("%c ", let[i]);
        }
    }
    
    printf("\n");
    
    return 0;
}
