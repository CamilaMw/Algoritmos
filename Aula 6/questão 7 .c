  #include <stdio.h>
  #include<locale.h>
int main() {
    setlocale(LC_ALL,"portuguese");
    int i = 0;
    while (i < 50) {
        int num1, num2, num3, num4, soma;

        printf("Digite quatro números inteiros: ");
        scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

        soma = num1 + num2 + num3 + num4;

        printf("A soma dos quatro números é: %d\n", soma);

        i++;
    }

    i = 0;

    do {
        int num1, num2, num3, num4, soma;

        printf("Digite quatro números inteiros: ");
        scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

        soma = num1 + num2 + num3 + num4;

        printf("A soma dos quatro números é: %d\n", soma);

        i++;
    } while (i < 50);

    for (i = 0; i < 50; i++) {
        int num1, num2, num3, num4, soma;

        printf("Digite quatro números inteiros: ");
        scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

        soma = num1 + num2 + num3 + num4;

        printf("A soma dos quatro números é: %d\n", soma);
    }

    return 0;
}

