/******************************************************************************
 – Elabore um programa em C que preencha um vetor com 10 números reais, calcule e mostre a 
quantidade de números negativos e a soma dos números positivos desse vetor. 
*******************************************************************************/
 #include <stdio.h>

int main()
{
    int vetor[10];
    int i;
    int neg= 0;
    int pos= 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um número real para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }
    
    for (i = 0; i < 10; i++)
    {
        if (vetor[i] < 0)
        {
          neg++;
        }
        else
        {
            pos+= vetor[i];
        }
    }
     printf("\n");
    printf("Quantidade de números negativos: %d\n",neg);
    printf("Soma dos números positivos: %d\n",pos);

    return 0;
}
