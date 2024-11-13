/*– Faça um programa em C que leia dois vetores de 12 elementos. Crie um vetor que seja a 
intersecção entre os dois vetores anteriores, ou seja, que contém apenas os números que estão 
em ambos os vetores. Não deve conter números repetidos.*/

#include <stdio.h>

int main()
{
    int vetor1[12];
    int vetor2[12];
    int intersecao[12];
    int i, x, y;
    int repetido;

    printf("Digite os elementos do primeiro vetor:\n");
    
    for (i = 0; i < 12; i++)
    {
        printf("Posição %d: ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (i = 0; i < 12; i++)
    {
        printf("Posição %d: ", i);
        scanf("%d", &vetor2[i]);
    }

   
    y = 0; 

    for (i = 0; i < 12; i++)
    {
        repetido = 0;    
        
    for (x= 0; x< 12; x++)
        {
            if (vetor1[i] == vetor2[x])
            {

     for (int l = 0; l < y; l++)
                {
            if (intersecao[l] == vetor1[i])
 {
                        repetido = 1;
                        
                    break;
 }
                }

            if (!repetido)
 {
                    intersecao[y] = vetor1[i];
                    y++;
 }
 
 }
 
 }
 
 }

    printf("Vetor de interseção:\n");
    
    for (i = 0; i < y; i++){
        
    printf("%d ", intersecao[i]);
    }
    printf("\n");

    return 0;
}
