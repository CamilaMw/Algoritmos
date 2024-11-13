/*Crie um programa em C que leia dois vetores inteiros de 20 posições. Ao final crie um terceiro 
vetor de 20 posições que terá nas posições pares os valores contidos nas mesmas posições do 
primeiro vetor e nas ímpares os valores na mesma posição do segundo vetor.*/


#include <stdio.h>

int main()
{
    int vetor1[20];
    int vetor2[20];
    int vetor3[20];
    int i;

 
    printf("Digite os valores do primeiro vetor:\n");
    for (i = 0; i < 20; i++)
    {
        printf("Posição %d: ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os valores do segundo vetor:\n");
    for (i = 0; i < 20; i++)
    {
        printf("Posição %d: ", i);
        scanf("%d", &vetor2[i]);
    }

    for (i = 0; i < 20; i++)
    {
        if (i % 2 == 0) 
        {
            vetor3[i] = vetor1[i];
        }
        else  
        {
            vetor3[i] = vetor2[i];
        }
    }
    
    printf("Terceiro vetor:\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d ", vetor3[i]);
    }
    printf("\n");

    return 0;
}
