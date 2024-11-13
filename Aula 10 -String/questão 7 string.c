/*Codifique um programa que recebe uma String e substitui cada letra
pela terceira letra seguinte circularmente (A é substituído por D, … e Z é
substituído por C*/


#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    int tamanho = strlen(palavra);
    int i;
    
    for (i = 0; i < tamanho; i++) {
        char letra = palavra[i];
        
        if (letra >= 'A' && letra <= 'Z') {
            letra = (letra - 'A' + 3) % 26 + 'A';
        }
         
        else if (letra >= 'a' && letra <= 'z') {
            letra = (letra - 'a' + 3) % 26 + 'a';
        }
        
        palavra[i] = letra;
    }
    
    printf("Palavra transformada: %s\n", palavra);
    
    return 0;
}
