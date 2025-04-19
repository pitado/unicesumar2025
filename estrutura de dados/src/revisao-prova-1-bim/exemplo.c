#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//5.

int main()
{
    int **matriz;
    int linhas = 2, colunas = 2;

    printf("\nInforme o numero de linhas: ");
    scanf("%d", &linhas);

    printf("\nInforme o numero de colunas: ");
    scanf("%d", &colunas);

    matriz = malloc(linhas * sizeof(int*));

    for(int i = 0; i < linhas; i++){
        matriz[i] = malloc(colunas * sizeof(int));
    }

    for(int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            matriz[i][j] = i * j;
        }
    }

    for(int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("\nMatriz[%d][%d]: %d", i, j, matriz[i][j]);
        }
    }
}
