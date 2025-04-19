#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//5. Escreva um programa que aloque dinamicamente um vetor de 10 inteiros,
// leia os valores do usuário e imprima o vetor.

int main()
{
    int *vetor_calloc, *vetor_expandido;
    int tamanho;


    printf("\nInforme o tamanho do vetor:");
    scanf("%d", &tamanho);

    // alocacao com funcao calloc ==> limpa os espacos de memoria
    vetor_calloc = calloc(tamanho, sizeof(int));

    for(int i = 0; i < tamanho; i++){
        vetor_calloc[i] = rand()%100;
    }

    printf("\n\nVetor calloc");
    for(int i = 0; i < tamanho; i++){
        printf("\nVetor[%d]: %d", i, vetor_calloc[i]);
    }

    printf("\nInforme o novo tamanho do vetor:");
    scanf("%d", &tamanho);

    // aumentar o tamanho do vetor ==> realloc
    vetor_expandido = realloc(vetor_calloc, tamanho);

    // apresentando novo vetor
    printf("\n\nVetor calloc expandido");
    for(int i = 0; i < tamanho; i++){
        printf("\nVetor[%d]: %d", i, vetor_expandido[i]);
    }

    free(vetor_calloc);
    free(vetor_expandido);
}
