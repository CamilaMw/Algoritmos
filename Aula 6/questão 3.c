#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, opcao, maior, menor, resultado, somapares, qtdpares, quantidade;
	float media, medpares;
	resultado = 1;
	quantidade = -1;
	maior = 0;
	qtdpares = 0;
	somapares = 0;
	
	
	
	printf("Bem vindo a calculadora virtual.\n");
	
	do {
	
		printf("\nPara começar a usar selecione a opção que desejar: \n");
		printf("(1) Soma dos números digitados; \n");
		printf("(2) Quantidade de números digitados; \n");
		printf("(3) Média dos números digitados; \n");
		printf("(4) Maior número digitado; \n");
		printf("(5) Menor número digitado; \n");
		printf("(6) Média dos números pares; \n");
		printf("(7) Sair; \n");
		printf("\nEscolha uma Opção: ");
		scanf("%d", &opcao);
	
		switch (opcao){
		
			case 1:
				printf("\nInsira os valores desejados e tecle enter.\nPara encerrar tecle -1. \nDigite um número: \n");
            	scanf("%d", &num);
            	resultado = resultado + num;
            	
				while (num>=0) {
            	    printf("Digite um número: \n");
                	scanf("%d", &num);
                	resultado = resultado + num;
                	
            	}
				printf("\nSoma dos números digitados: %d\n", resultado);
				break;
				
			case 2:
				printf("\nInsira os valores desejados e tecle enter.\nPara encerrar tecle -1. \nDigite um número: \n");
            	scanf("%d", &num);
            	quantidade = quantidade + 1;
            	
            	while (num >= 0){
            		printf("Digite um número: \n");
                	scanf("%d", &num);
                	quantidade = quantidade + 1;
            		
				}
            	
				printf("\nQuandidade de números digitados: %d\n", quantidade);
				break;
				
			case 3:
				printf("\nInsira os valores desejados e tecle enter.\nPara encerrar tecle -1. \nDigite um número: \n");
            	scanf("%d", &num);
            	quantidade = quantidade + 1;
            	resultado = resultado + num;
            	
            	while(num>=0){
            		printf("Digite um número: \n");
                	scanf("%d", &num);
                	quantidade = quantidade + 1;
                	resultado = resultado + num;
            		
				}
            	media = resultado / quantidade;	
            	
				printf("\nMédia dos Números digitados: %0.2f\n", media);
				break;
				
			case 4:
				printf("\nInsira os valores desejados e tecle enter.\nPara encerrar tecle -1. \nDigite um número: \n");
            	scanf("%d", &num);
            	if(num>maior){
            		maior=num;
				}
            	while (num >= 0){
            		printf("Digite um número: \n");
                	scanf("%d", &num);
                	if(num>maior){
            			maior=num;
            		}
            		
				}
				
				printf("\nMaior número digitado: %d\n", maior);
				break;
				
			case 5:
				

				
				printf("\nInsira os valores desejados e tecle enter.\nPara encerrar tecle -1. \nDigite um número: \n");
            	scanf("%d", &num);
            	menor = num;
            	
            	if(num < menor && num != -1){
            		menor = num;
				}
				
            	while (num >= 0 ){
            		printf("Digite um número: \n");
                	scanf("%d", &num);
                	
                	if(num < menor && num != -1){
            			menor = num;
            		}
            		
				}
				
				
				printf("\nMenor número digitado: %d\n", menor);
				break;
				
			case 6:
				printf("\nInsira os valores desejados e tecle enter.\nPara encerrar tecle -1. \nDigite um número: \n");
            	scanf("%d", &num);
            	if(num % 2 ==0){
            		somapares = somapares + num;
            		qtdpares = qtdpares + 1;
				}
            	
            	while (num >= 0){
            		printf("Digite um número: \n");
                	scanf("%d", &num);
                	if(num % 2 ==0){
            		somapares = somapares + num;
            		qtdpares = qtdpares + 1;
					}
                }
                
                medpares = somapares / qtdpares;
				
				printf("\nMedia dos números pares: %0.2f\n", medpares);
				break;
				
			case 7:
				printf("\nVocê teclou sair, até logo :D\n");
				break;
				
			default:
				printf("\nOpção invalida! Tente outra vez.\n");
		
		}
		
	}while (opcao != 7);
	
	return 0;
	
}
