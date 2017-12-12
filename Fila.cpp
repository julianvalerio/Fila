/*Created by:
Julian Rodrigues Valerio*/
#include "Fila.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
struct fila
{
    int info;
    bool prioridade;
    struct fila *prox;
};
Fila* fila_cria(void)
{
    return NULL;
}

Fila* verifica_prioridade(Fila *f, int i, bool prioridade){
    if (prioridade){
        f = fila_insere_prioridade(f, i, prioridade);
        return f;
    }
    f = fila_insere(f, i, prioridade);
    return f;
}

Fila* fila_insere(Fila *f, int i, bool prioridade){
    Fila* novo = (Fila*) malloc(sizeof(Fila));
    novo -> info = i;
    if(fila_vazia(f)){
        f = novo;
        novo -> prox = NULL;
        return f;
    }else{
        Fila *aux=f;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux -> prox = novo;
        novo -> prox = NULL;
        return f;
    }
}

Fila* fila_insere_prioridade(Fila *f, int i, bool prioridade){
    Fila* novo = (Fila*) malloc(sizeof(Fila));
    novo -> info = i;
    if(fila_vazia(f)){
        f = novo;
        novo -> prox = NULL;
        return f;
    }else
        novo -> prox = f;
        return novo;
}

void fila_imprime(Fila* f){
    Fila *aux =f;
    while(aux != NULL){
        cout<< aux->info <<endl;
        aux=aux->prox;
    }
}
Fila* fila_retira(Fila* f){
    Fila* tmp =f;
    f = f ->prox;
    free(tmp);
    tmp=NULL;
    return f;
}
bool fila_vazia(Fila* f){
    return (f == NULL);
}
