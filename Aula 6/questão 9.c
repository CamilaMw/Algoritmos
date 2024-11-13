 #include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int x, num = 0;

    for (x = 1; num < 5; x++) {
        if (x % 3 == 0) {
            printf("%d é múltiplo de 3\n", x);
            num++;
        }
    }

    return 0;
}

