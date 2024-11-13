
/*Codifique, compile e execute um programa que contenha uma função que receba como 
parâmetro um valor inteiro e gere como saída n linhas com pontos de exclamação, conforme o 
exemplo abaixo (para n = 5): */
 

#include <stdio.h>

void Exclamacao(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int x = 1; x <= i; x++)
        {
            printf("!");
        }
        printf("\n");
    }
}

int main()
{
    int num;

    printf("Digite o valor de n: ");
    scanf("%d", &num);

   Exclamacao(num);

    return 0;
}
