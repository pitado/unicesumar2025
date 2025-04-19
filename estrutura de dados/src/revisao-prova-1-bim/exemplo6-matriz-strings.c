#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    char ***matriz;
    int linhas = 2, colunas = 2, tamanho_palavra = 15;

    matriz = malloc(linhas * sizeof(char**));

    for(int i = 0; i < linhas; i++){
        matriz[i] = malloc(colunas * sizeof(char*));

        for (int j = 0; j < colunas; j++){
            matriz[i][j] = malloc(tamanho_palavra * sizeof(char));
        }
    }

    printf("Informe uma palavra: ");
    gets(matriz[0][0]);

    // acessar terceira letra da string em [0][0]
    // printf("\nMatriz[0][0]: %c", *(matriz[0][0] + 2));

    // acessar terceira letra da string em [0][0]
    printf("\nMatriz[0][0]: %c", matriz[0][0][2]);

}
