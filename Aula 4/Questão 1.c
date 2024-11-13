Quest�o 1 

#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"portuguese")
float n1, n2, n3, p1, p2, p3, mp;

    printf("Digite a primeira nota");
scanf("%f", &n1);
printf("Digite o peso desta nota :");
scanf("%f", &p1);

printf("Digite a segunda nota :")
scanf("%f",  &n2);
printf("Digite o peso desta nota :");
scanf("%f", &p2)

printf("Digite a terceira nota:");
scanf("%f", &n3);
printf("Digite o peso desta nota:")
scanf("%f", &p3);

mp=((n1*p1)+(n2*p2)+(n3*p3)/(p1+p2+p3));
printf("a media ponderada das notas é %f", mp);



    return 0;
}
