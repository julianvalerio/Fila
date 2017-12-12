#include <iostream>
#include "Fila.h"
using namespace std;

int main()
{
    Fila* f;
    f = fila_cria();
    f = verifica_prioridade(f, 23, false);
    f = verifica_prioridade(f, 24, false);
    f = verifica_prioridade(f, 65, true);
    f = verifica_prioridade(f, 26, false);
    f = verifica_prioridade(f, 76, true);

    //fila_imprime(f);
    //f = fila_retira(f);
    //cout<<"NOVA FILA"<<endl;
    fila_imprime(f);
    return 0;
}
