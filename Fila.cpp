/*Created by:
Julian Rodrigues Valerio*/
#include "Fila.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
struct fila
{
    int info;
    struct fila *prox;
};
Fila* fila_cria(void)
{
    return NULL;
}

Fila* fila_insere(Fila *f, int i){
    Fila* novo = (Fila*) malloc(sizeof(Fila));
    novo -> info = i;
    if(fila_vazia(f)){
        f = novo;
        return f;
    }
    Fila *aux=f;
    Fila *ant=NULL;
    while(aux != NULL){
        ant = aux;
        aux = aux->prox;
    }
    ant -> prox = novo;
    novo -> prox = aux;
    return f;
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
