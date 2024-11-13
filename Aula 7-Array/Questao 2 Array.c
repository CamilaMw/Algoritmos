/******************************************************************************
   Faça um programa em C que leia um vetor de 8 posições e, em seguida, leia também dois
valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá
escrever a soma dos valores encontrados nas respectivas posições X e Y

*******************************************************************************/
 #include <stdio.h>
 
 int main()
 {
    int vetor[8];
    int x, y,i;
    
    
    printf("\n Dig 8 n°:\n");
    
    for(i=0;i<8;i++){
    scanf("%d", &vetor[i]);

    }

printf("\n Dig uma posição entre 0 e 7 \n");
scanf("%d",&x);

printf("\n Dig uma posição entre 0 e 7 \n");
scanf("%d",&y);
int soma = vetor[x]+vetor[y];
printf(" a soma das posiçoes e:%d",soma);
    return 0;
 }