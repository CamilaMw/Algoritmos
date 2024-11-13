  /*Faça uma função que receba por parâmetro dois valores X e Z. Calcule e retorne o resultado 
de XZ para o programa principal. 
Atenção, não utilize nenhuma função pronta de exponenciação.*/

#include <stdio.h>

int exponenciação(int base, int p)
{
    int resp = 1;
    
    for (int i = 0; i < base; i++)
    {
        resp *= base;
    }
    
    return resp;
}

int main()
{
    int base, p;
    
    printf("Digite o valor de base: ");
    scanf("%d", &base);
    
    printf("Digite o valor da potencia: ");
    scanf("%d", &p);
    
    int resp= exponenciação(base, p);
    
    printf("%d elevado a %d é igual a %d\n", base, p, resp);
    
    return 0;
}
