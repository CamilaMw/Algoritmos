/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("Digite um número de 1 ao 7:");
    scanf("%d", &num );
    
switch (num)
   { 
    case 1: printf("Domingo");
    break;
    
    case 2:printf("Segunda");
    break;
    
    case 3:printf("Terça");
    break;
    
    case 4: printf("Quarta");
    break;
    
    case 5: printf("Quinta");
    break;
    
    case 6: printf("Sexta");
    break;
    
    case 7: printf("Sabado");
    break;
    
    default: printf("Número diferente de 1 a 7 ");
    break;
}
  
    return 0;
}
