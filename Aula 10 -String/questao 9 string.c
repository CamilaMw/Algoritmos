 /*Escreva um programa que funciona como o jogo da forca. O
usuário tenta acertar uma palavra (contida numa variável) usando 5
tentativas. A palavra é mostrada ao usuário com as letras marcadas
com o símbolo '*'. O usuário deve digitar uma letra (sem acentos, til,
trema) e caso a letra esteja correta, o símbolo '*' é substituído pela
letra. Se o usuário não montar a palavra até a quinta tentativa, o jogo
acaba em derrota*/

#include <stdio.h>
#include <string.h>

int main() {
    char palavra[] = "notebook";   
    int tamanho = strlen(palavra);
    char palavraAdivinhada[100];   
    int i, j;
    int tentativas = 5;
    int acertou = 0;


    for (i = 0; i < tamanho; i++) {
        palavraAdivinhada[i] = '*';
    }
    palavraAdivinhada[tamanho] = '\0';

    printf("Bem-vindo ao Jogo da Forca!\n");
    printf("Adivinhe a palavra em no máximo 5 tentativas!\n");

    while (tentativas > 0 && !acertou) {
        printf("\nPalavra: %s\n", palavraAdivinhada);
        printf("Tentativas restantes: %d\n", tentativas);

        char letra;
        printf("Digite uma letra: ");
        scanf(" %c", &letra);

        
        int encontrou = 0;
        for (j = 0; j < tamanho; j++) {
            if (palavra[j] == letra) {
                encontrou = 1;
                palavraAdivinhada[j] = letra;
            }
        }

        if (encontrou) {
            printf("Letra correta!\n");
        } else {
            printf("Letra incorreta!\n");
            tentativas--;
        }

         
        if (strcmp(palavraAdivinhada, palavra) == 0) {
            acertou = 1;
        }
    }

    if (acertou) {
        printf("\nParabéns, você acertou a palavra: %s\n", palavraAdivinhada);
    } else {
        printf("\nVocê perdeu! A palavra era: %s\n", palavra);
    }

    return 0;
}
