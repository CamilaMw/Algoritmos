/*Codifique, compile e execute um programa na linguagem C que leia dois elementos e os passe 
como parâmetros em uma função soma que deverá retornar o valor da soma desses dois 
elementos. Em seguida imprima o resultado na função principal.*/

#include <stdio.h>

int soma(int x, int y)
{
    return x + y;
}

int main()
{
    int num1, num2;

    printf("Digite o primeiro elemento: ");
    scanf("%d", &num1);

    printf("Digite o segundo elemento: ");
    scanf("%d", &num2);

    int resp = soma(num1, num2);

    printf("A soma dos dois elementos é: %d\n", resp);

    return 0;
}
