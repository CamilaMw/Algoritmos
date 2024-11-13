 #include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int x;

    for (x = 15; x <= 200; x++) {
        int quadrado = x * x;
        printf("O quadrado de %d é: %d\n", x, quadrado);
    }

    return 0;
}
