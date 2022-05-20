#include "pilha.h"

no *empilhar(no *pilha, int n){
    no *aux;
    aux =(no*) malloc(sizeof(no));
    aux->prox=pilha;
    aux->numero=n;
    return aux;  
}

no *inicializar(){
    return NULL;
}

no * desempilhar(no * pilha, int *numero){
    no *aux;
    aux=pilha;
    *numero= aux->numero;
    aux=aux->prox;
    pilha->prox=NULL;
    free(pilha);
    return(aux);
}
