#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

typedef struct a{
    int numero;
    struct a *prox;
}no;

no *empilhar(no *pilha, int n);
no *inicializar();
no * desempilhar(no * pilha, int *numero);