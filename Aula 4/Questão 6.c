 #include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"portuguese");
    
    int altDegrau,altDesejada,qtdDegraus;
    
    printf("\nInforme a altura de cada degrau ");
    scanf("%d", &altDegrau);
    
    printf("\nInforme a altura desejada ");
    scanf("%d", &altDesejada);
    
    printf("\nA quantidade de degraus que esse usuario subiu" ),(qtdDegraus= altDegrau/altDesejada);
    
    return 0;
}