
#include <stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    
    int altura, base, area;
    
    
    do{ 
    printf("Digite a altura do triangulo:");
    scanf("%d",&altura);
    
    } while(altura<=0);
     
      do{ 
    printf("Digite a base do triangulo:");
    scanf("%d",&base);
    
    } while(base<=0);
    
    area=(base*altura)/2;
    printf("A area do triangulo:%d" , area);
    
    return 0;
}
