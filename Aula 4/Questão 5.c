#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"portuguese");
    
    int anoNasc, anoAtual;
    printf("\nDigite o ano de nascimento: ");
    scanf("%d", &anoNasc);
    
    printf("\nDigite o ano atual: ");
    scanf("%d", &anoAtual);
    
    printf("\nAtualmente essa pessoa tem %d anos \n", anoNasc-anoAtual);
    printf("\nem 2020 essa pessoa ter%c %d anos\n\n", 160,2020-anoNasc);
    
    return 0;
}