#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TAMANHO 5

typedef struct {
   int dados[TAMANHO];
   int topo;
} Pilha;

bool isEmpty(Pilha *p){
    return p->topo == -1;
}

void inicializar(Pilha *p){
   p->topo = -1;
}

void push(Pilha *p, int dado){
    if(p->topo == TAMANHO - 1){
        printf("Pilha Cheia!");
        return;
    }
    p->topo++;
    p->dados[p->topo] = dado;
}

int imprime_pilha(Pilha *p){

    if(isEmpty(p)){
        printf("Pilha Vazia");
        return;
    }

    int i;

    for(i = 0; i <= p->topo; i++){
        printf("%d -> ", p->dados[i]);
    }

    printf("topo");
}

int pop(Pilha *p){

    if(isEmpty(p)){
        printf("Pilha Vazia!");
        return;
    }

    int temp = p->dados[p->topo];
    p->topo--;
    return temp;

}

void topo(Pilha *p){
    if(isEmpty(p)){
        printf("Pilha Vazia!");
        return;
    }

    printf("\n\nTopo => %d", p->dados[p->topo]);
}


void inverterVetor(int *vetor, int tamanho_vetor){
    int vetor_invertido[tamanho_vetor];
    Pilha p;

    inicializar(&p);

    for(int i=0; i < tamanho_vetor; i++){
       push(&p, vetor[i]);
    }

    for(int i=0; i < tamanho_vetor; i++){
       vetor_invertido[i] = pop(&p);
    }

    printf("Vetor Original -> ");
    for(int i=0; i < tamanho_vetor; i++){
       printf("%d ", vetor[i]);
    }
    printf("\n");
    printf("Vetor Invertido -> ");
    for(int i=0; i < tamanho_vetor; i++){
       printf("%d ", vetor_invertido[i]);
    }
}

void fazer_desfazer(){
    Pilha original, refazer, desfazer;
    int op;
    char op_n;
    inicializar(&original);
    inicializar(&desfazer);
    inicializar(&refazer);

    do{
        system("cls");
        printf("Pilhas");
        printf("\n(N)ova acao");
        printf("\n(D)esfazer");
        printf("\n(R)efazer");
        printf("\n(S)air");
        printf("\nEscolha uma opcao:");
        scanf("%d", &op);
        fflush(stdin);
        switch(op){
            case(1):
                system("cls");
                printf("Nova acao\n");
                printf("\n(E)mpilhar");
                printf("\n(D)esempilhar");
                printf("\nEscolha uma opcao:");
                op_n = getchar();

                int valor;
                if(op_n == 'e' || op_n == 'E'){
                    system("cls");
                    printf("Nova acao -> Empilhar");
                    printf("\nInforme o valor a empilhar: ");
                    scanf("%d", &valor);
                    push(&original, valor);
                    inicializar(&refazer);
                } else if (op_n == 'd' || op_n == 'D'){
                    valor = pop(&original);
                    printf("Voce desempilhou o valor %d", valor);
                    push(&refazer, valor);
                    getch();
                } else {
                    printf("Opcao invalida. Retornando ao menu inicial");
                    getch();
                }

        }

    } while(op != 'S' && op != 's');

}

main(){
    fazer_desfazer();

}
