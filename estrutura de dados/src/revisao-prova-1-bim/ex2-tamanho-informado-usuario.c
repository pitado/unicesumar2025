#include <stdio.h>
#include <stdlib.h>

//5. Escreva um programa que aloque dinamicamente um vetor de 10 inteiros,
// leia os valores do usuário e imprima o vetor.

int main()
{
    int *vetor;
    int tamanho;


    printf("\nInforme o tamanho do vetor:");
    scanf("%d", &tamanho);

    vetor = malloc(tamanho * sizeof(int));

    for(int i = 0; i < tamanho; i++){
        printf("\nInforme o %do numero: ", i+1);
        scanf("%d", &vetor[i]); // usa o & pois precisa do endereco de determinada posicao no vetor

        // vetor sem *, informa o endereco da primeira prosicao do vetor
        // vetor com * informo o conteudo da primeira posicao do vetor (vetor[0]);
        // vetor[0] == *vetor (com asteristico)
    }

    for(int i = 0; i < tamanho; i++){
        printf("\nVetor[%d]: %d", i, vetor[i]);
    }

    free(vetor);
}
