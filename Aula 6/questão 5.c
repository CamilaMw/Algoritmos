  #include <stdio.h>
  #include<locale.h>
int main() {
    setlocale(LCC_ALL,"portuguese");
    
    int idade, soma = 0, contador = 0;

    printf("Digite as idades dos individuos \n");
    printf ("(0 para terminar)");
    
    do {
        scanf("%d", &idade);
        if (idade != 0) {
            soma += idade;
            contador++;
        }
    } while (idade != 0);

    if (contador == 0) {
        printf("Nenhuma idade foi informada.\n");
    } else {
        float media = (float) soma / contador;
        printf("A idade media dos individuos informados e %.2f anos.\n", media);
    }

    return 0;
}
