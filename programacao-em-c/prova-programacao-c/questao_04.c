#include <stdio.h>

int main() {
    int senha;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);
    } while (senha != 123);

    printf("Senha correta!\n");
    printf("Acesso liberado!\n");

    return 0;
}
