/******************************************************************************
 Leia um vetor de 50 posições e atribua valor 0 para todos os elementos que possuírem valores 
negativos
*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[50];
    int i;
    
    for (i = 0; i < 50; i++)
    {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 50; i++)
    {
        if (vetor[i] < 0)
        {
            vetor[i] = 0;
        }
    }

    printf("Vetor com valores não negativos:\n");
    for (i = 0; i < 50; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
