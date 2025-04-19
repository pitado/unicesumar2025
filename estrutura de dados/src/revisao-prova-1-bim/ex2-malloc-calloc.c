#include <stdio.h>
#include <stdlib.h>

//5. Escreva um programa que aloque dinamicamente um vetor de 10 inteiros,
// leia os valores do usuário e imprima o vetor.

int main()
{
    int *vetor_malloc, *vetor_calloc;
    int tamanho;


    printf("\nInforme o tamanho do vetor:");
    scanf("%d", &tamanho);

    // alocacao com funcao malloc
    vetor_malloc = malloc(tamanho * sizeof(int));


    // alocacao com funcao calloc ==> limpa os espacos de memoria
    vetor_calloc = calloc(tamanho, sizeof(int));

    printf("\n\nVetor malloc");
    for(int i = 0; i < tamanho; i++){
        printf("\nVetor[%d]: %d", i, vetor_malloc[i]);
    }

    printf("\n\nVetor calloc");
    for(int i = 0; i < tamanho; i++){
        printf("\nVetor[%d]: %d", i, vetor_calloc[i]);
    }

    free(vetor_malloc);
    free(vetor_calloc);
}
