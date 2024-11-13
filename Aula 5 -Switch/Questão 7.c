#include<stdio.h>
#include<stdlib.h>
int main()
{

    float valor,co;
    
    printf("Digite o valor do produto: ");
    scanf("%f",&valor);
    
    printf("Digite o codigo de Origem: ");
    scanf("%f",&co);
    
    if (co == 1)
    {
    printf("O produto de valor 500,00 tem sua procedencia do SUL!!\n", valor,co);
    }
    else
    if (co == 2)
    {
    printf("O produto de valor 600,00 tem sua procedencia do NORTE!!\n", valor,co);
    }
    else
    if (co == 3)
    {
    printf("O produto de valor 700,00 tem sua procedencia do LESTE!!\n", valor,co);
    }
    else
    if (co == 4)
    {
    printf("O produto de valor 800,00 tem sua procedencia do OESTE!!\n", valor,co);
    }
    else
    if (co ==5)
    {
    printf("O produto de valor 900,00 tem sua procedencia do NORDESTE!!\n", valor,co);
    }
    if (co ==6)
    {
   printf("O produto de valor 1000,00 tem sua procedencia do SUDESTE!!\n", valor,co);
    }
    else
    if (co==8)
    {
    printf("O produto de valor 1100,00 tem sua procedencia do CENTRO-OESTE!!\n", valor,co);
    }
    else
    if (co==8)
    {
    printf("O produto de valor 1200,00 tem sua procedencia do CENTRO-SUL!!\n", valor,co);
    }
    
    
system("pause");
return 0;
}