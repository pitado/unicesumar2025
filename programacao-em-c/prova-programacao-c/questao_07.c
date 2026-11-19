#include <stdio.h>

int main() {
    double numero1, numero2;
    int opcao;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &numero2);

    printf("\nEscolha uma operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("\nDigite sua opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Resultado: %g\n", numero1 + numero2);
            break;
        case 2:
            printf("Resultado: %g\n", numero1 - numero2);
            break;
        case 3:
            printf("Resultado: %g\n", numero1 * numero2);
            break;
        case 4:
            if (numero2 != 0) {
                printf("Resultado: %g\n", numero1 / numero2);
            } else {
                printf("Nao e possivel dividir por zero.\n");
            }
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
