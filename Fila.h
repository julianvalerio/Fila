#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
typedef struct fila Fila;
Fila* fila_cria(void);
void fila_libera(Fila* f);
Fila* fila_insere(Fila* f, int i);
Fila* fila_retira(Fila* f);
Fila* fila_busca(Fila* f, int v);
bool fila_vazia(Fila* f);
void fila_imprime(Fila* f);
#endif // FILA_H_INCLUDED
