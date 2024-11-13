Quest�o 2 

#include <stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float sal1, sal2;
    printf("Digite o valor de seu salário atual");
    scanf("%f", &sal1);
    
    sal2=sal1+(sal1*0.25);

    printf("O seu salário com aumento é: %f", sal2);
return 0;
}