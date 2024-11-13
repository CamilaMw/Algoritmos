/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

int main()
{
        float salB, bonus, imposto;
        
    printf("Digite seu salario: ");
    scanf ("%f", &salB);
    
    bonus = salB*0.05;

    printf ("Sua gratificacao sobre o salario-base: %f \n", bonus);
    
    imposto = salB*0.07;
    
    printf ("Imposto sobre o salario-base: %f", imposto);

    return 0;
}
}
