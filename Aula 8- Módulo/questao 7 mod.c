 /*– Crie uma função que recebe um número como parâmetro e retorne o fatorial do número digitado*/
 
 #include <stdio.h>

int fat(int num)
{
    int resp = 1;
    
    for (int i = 1; i <= num; i++)
    {
        resp *= i;
    }
    
    return resp;
}

int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    int resp = fat(num);

    printf("O fatorial de %d é: %d\n", num, resp);

    return 0;
}
