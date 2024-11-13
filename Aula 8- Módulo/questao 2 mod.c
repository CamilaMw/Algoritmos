 /*Codifique, compile e execute um programa que leia três números. Para cada número, imprima 
o dobro. Use uma função que recebe como parâmetro um número inteiro e devolve o seu dobro. O 
valor calculado deve ser impresso na função principal.*/


#include <stdio.h>

int cabecalho (int num)
{
    return num * 2;
}

int main()
{
    int num1, num2, num3;

    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int dobroNum1 = cabecalho(num1);
    int dobroNum2 = cabecalho(num2);
    int dobroNum3 = cabecalho(num3);

    printf("O dobro do primeiro número é: %d\n", dobroNum1);
    printf("O dobro do segundo número é: %d\n", dobroNum2);
    printf("O dobro do terceiro número é: %d\n", dobroNum3);

    return 0;
}
