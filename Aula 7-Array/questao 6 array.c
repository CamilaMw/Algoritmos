 /*Codifique, compile e execute um programa na linguagem C que leia 7 números inteiros 
quaisquer no intervalo de [0, 9] e armazene em um vetor. Caso o usuário digite um valor fora do 
intervalo de [0,9] o programa deve insistir até que seja fornecido um valor válido. Em seguida, 
calcule/exiba a quantidade de números 2, 3 e 5 presentes na sequência. 
(utilize a estrutura de decisão switch)*/

#include <stdio.h>

int main(){
    
    int num[7];
    int i;
    int quant2 = 0, quant3 = 0, quant5 = 0;

    for (i = 0; i < 7; i++)
    {
        do
        {
            printf("Digite um número inteiro no intervalo de [0, 9]: ");
            scanf("%d", &num[i]);

            if (num[i] < 0 || num[i] > 9)
            {
                printf("Valor inválido! Digite novamente.\n");
            }
        } while (num[i] < 0 || num[i] > 9);
    }

    for (i = 0; i < 7; i++)
    {
        switch (num[i])
        {
        case 2:
            quant2++;
            break;
        case 3:
            quant3++;
            break;
        case 5:
            quant5++;
            break;
        }
    }

    printf("Quantidade de números 2: %d\n", quant2);
    printf("Quantidade de números 3: %d\n", quant3);
    printf("Quantidade de números 5: %d\n", quant5);

    return 0;
}
