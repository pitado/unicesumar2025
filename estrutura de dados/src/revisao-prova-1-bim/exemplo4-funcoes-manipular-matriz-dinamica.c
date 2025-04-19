#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// funcao que cria uma matriz dinamica
int ** alocaMemoriaMatriz(int linhas, int colunas){
    int **matriz;
    matriz = malloc(linhas * sizeof(int*));
    for(int i = 0; i < linhas; i++){
        matriz[i] = malloc(colunas * sizeof(int));
    }
    return matriz;
}

// funcao que imprime a matriz
void imprimeMatriz(int linhas, int colunas, int ** matriz){
    for(int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("\nMatriz[%d][%d]: %d", i, j, matriz[i][j]);
        }
    }
}

// funcao que preenche a matriz
void preencheMatriz(int linhas, int colunas, int ** matriz){
    for(int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            matriz[i][j] = i * j;
        }
    }
}

void limparMatriz(int linhas, int colunas, int ** matriz){
    printf("Limpeza da matriz iniciada.")

    for(int i = 0; i < linhas; i++){
        printf("\nLimpando linha %d/%d.", i, linhas);
        free(matriz[i]);
    }

    printf("\nLimpando variavel matriz.");
    free(matriz);
}

int main()
{
    int **matriz;
    int linhas, colunas;

    printf("\nInforme o numero de linhas: ");
    scanf("%d", &linhas);

    printf("\nInforme o numero de colunas: ");
    scanf("%d", &colunas);

    // utiliza funcao alocar matriz para criar a matriz
    matriz = alocaMemoriaMatriz(linhas, colunas);

    // utiliza funcao para preencher a matriz
    preencheMatriz(linhas, colunas, matriz);

    // funcao imprime a matriz
    imprimeMatriz(linhas, colunas, matriz);

    //utilizar funcao para limpar a matriz
    limparMatriz(linhas, colunas, matriz);
}
