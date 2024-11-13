#include <stdio.h>

int main() 
{
    int x, i;
    float E = 1, fatorial = 1;
    
    printf("Digite um valor inteiro e positivo para x: ");
    scanf("%d", &x);
    
    for (i = 1; i<= x; i++) 
    {
        fatorial *= i;
        E += 1/fatorial;
    }
    
    printf("O valor de E é: %d", E);
    
    return 0;
}
