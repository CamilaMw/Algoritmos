/*Desenvolva um programa em C para ler 8 números inteiros DIFERENTES a serem 
armazenados em um vetor. Os dados deverão ser armazenados no vetor na ordem que forem 
sendo lidos, sendo que caso o usuário digite um número que já foi digitado anteriormente, o 
programa deverá pedir para ele digitar outro número. 
Note que a cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe 
entre os números que já foram digitados. Exibir na tela o vetor final que foi digitado.*/

#include <stdio.h>

int main()
{
    int vetor[8];
    int i, x;
    int num;
    int repetido;

    printf("Digite 8 números inteiros diferentes:\n");
    for (i = 0; i < 8; i++)
    {
        do
        {
            printf("Posição %d: ", i);
            scanf("%d", &num);

            repetido = 0;
    for (x = 0; x < i; x++)
            {
        if (vetor[x] == num)
                {
            repetido = 1;
            
                printf("Número repetido! Digite outro número.\n");
                    break;
                }
            }
        } while (repetido);

        vetor[i] = num;
    }

    printf("Vetor final digitado:\n");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
