/******************************************************************************
 Escrever um programa que declare um vetor de 20 inteiros, leia um valor para cada posição e
no final mostre quantos elementos possuem valor maior, menor e igual ao primeiro elemento do
vetor. 

*******************************************************************************/
 #include <stdio.h>
 
 int main()
 {
    int vetor[5];
    int x, i;
    int maior= 0;
    int menor=0;
    int igual=0;
    
    printf ("digite 20 numeros interiros \n");
 
    for (i = 0; i < 5; i++)    
    {
       scanf("%d", &vetor[i]);
    }
    i = 1;
    x = vetor[0];
 
    while (i < 5)
    {
        if(vetor[i] > x)
        {
           maior+=1;
        }
        
       else if(vetor[i]<x){
            
            menor+=1;
       }      
       else{
           igual+=1; 
        }
        i++;
         
    }
 
    printf("\n%d sao maiores que o primeiro .\n",maior);
    printf("\n %d sao menores que o primeiro.\n", menor);
    printf("\n %d sao iguais ao primeiro. \n", igual);
    return 0;
 }