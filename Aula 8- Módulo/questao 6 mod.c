/*Acrescente no exercício anterior as funções de subtração, multiplicação e divisão dos números 
digitados*/


 #include <stdio.h>

int soma(int a, int b)
{
    return a + b;
}

int subtracao(int a, int b)
{
    return a - b;
}

int multiplicacao(int a, int b)
{
    return a * b;
}

float divisao(int a, int b)
{
    return (float) a / b;
}

int main()
{
    int num1,num2;

    printf("Digite o primeiro elemento: ");
    scanf("%d", &num1);

    printf("Digite o segundo elemento: ");
    scanf("%d", &num2);

    int respSoma = soma(num1, num2);
    
    int respSubtracao = subtracao(num1, num2);
    
    int respMultiplicacao = multiplicacao(num1, num2);
    
    float respDivisao = divisao(num1, num2);

    printf("Soma: %d\n", respSoma);
    printf("Subtracao: %d\n", respSubtracao);
    printf("Multiplicacao: %d\n", respMultiplicacao);
    printf("Divisao: %.2f\n", respDivisao);

    return 0;
}
