#include <iostream>
#include "Fila.h"
using namespace std;

int main()
{
    Fila* f;
    f = fila_cria();
    f = fila_insere(f, 23);
    f = fila_insere(f, 24);
    f = fila_insere(f, 25);
    f = fila_insere(f, 26);
    fila_imprime(f);
    f = fila_retira(f);
    cout<<"NOVA FILA"<<endl;
    fila_imprime(f);
    return 0;
}
