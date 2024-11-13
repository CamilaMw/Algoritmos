
#include <stdio.h>
int main()
{
    int n1 ,n2 ,n3;
    
    printf("Digite o primeiro número");
    scanf("%d", &n1);
    
    printf("Digite o segundo número");
    scanf("%d", &n2);
    
    printf("Digite o terceiro número");
    scanf("%d", &n3);

    
    if(n1<n2 && n1<n3 && n2<n3)
    {
        printf("A ordem crescente dos números: %d,%d,%d",n1,n2,n3);
    }
    if(n1<n2 &&  n1<n3 && n3<n2)
    {
    printf("A ordem crescente dos números: %d,%d,%d",n1,n3,n2);
    }
    if(n2<n1 && n2<n3 && n1<n3 )
    {
    printf("A ordem crescente dos números: %d,%d,%d",n2,n1,n3);
    }
    if(n2<n1 && n2<n3 && n3<n1)
    {
    printf("A ordem crescente dos números: %d,%d,%d",n2,n3,n2);
    }
    if(n3<n1 && n3<n2 && n1<n2)
    {
    printf("A ordem crescente dos números: %d,%d,%d",n3,n1,n2);
    }
    if(n3<n1 && n3<n2 &&n2<n1 )
    {
    printf("A ordem crescente dos números: %d,%d,%d",n3,n2,n1);
}
    return 0;
}

