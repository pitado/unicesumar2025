#include <stdio.h>

int main() {
    int numero = 1;
    int soma = 0;

    while (numero <= 5) {
        soma = soma + numero;
        numero++;
    }

    printf("Resultado da soma: %d\n", soma);

    return 0;
}
