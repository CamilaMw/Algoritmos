 #include <stdio.h>
 #include<locale.h>
 
int main() {
    setlocale(LCC_ALL, "portuguese");
    
    int num, i, primo = 0;

    printf("Digite um número inteiro maior do que 1: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
         primo = 1;
            break;
        }
    }

    if (primo == 0 && num > 1)
        printf("%d é um número primo\n", num);
    else
        printf("%d não é um número primo\n", num);

    return 0;
}
