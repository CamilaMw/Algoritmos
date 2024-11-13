 #include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
  
    int x, soma = 0;

    for (x= 2; x <= 100; x += 2) {
        soma += x;
    }

    printf("A soma dos 50 primeiros números pares é: %d\n", soma);

    return 0;
}

