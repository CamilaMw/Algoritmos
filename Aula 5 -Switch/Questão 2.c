/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    char resp;
    printf("Digite C,S,V,D ou Q:");
    scanf("%c", &resp);
    switch (resp)
    { 
    case 'C':
    case 'c':printf("Casado");
    break;
    
    case 'S':
    case 's':printf("Solteiro");
    break;
    
    case 'V':
    case 'v':printf("Viúvo");
    break;
    
    case 'D':
    case 'd':printf("Divorciado");
    break;
    
    case 'Q':
    case 'q':printf("Desquitado");
    break;
    
    default:("Resposta Errada");
    break;
    }
    return 0;
}

