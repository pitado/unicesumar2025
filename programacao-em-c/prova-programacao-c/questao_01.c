#include <stdio.h>

int main() {
    double numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &numero2);

    printf("\nSoma: %g\n", numero1 + numero2);
    printf("Subtracao: %g\n", numero1 - numero2);
    printf("Multiplicacao: %g\n", numero1 * numero2);

    if (numero2 != 0) {
        printf("Divisao: %g\n", numero1 / numero2);
    } else {
        printf("Divisao: nao e possivel dividir por zero.\n");
    }

    return 0;
}
