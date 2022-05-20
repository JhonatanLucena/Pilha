#include "pilha.h"

int main(int argc, char const *argv[])
{
    no *pilha;
    int numero;
    pilha=inicializar();
    pilha=empilhar(pilha,1);
    pilha=empilhar(pilha,2);
    pilha=empilhar(pilha,3);
    pilha=empilhar(pilha,4);
    pilha=desempilhar(pilha,&numero);
    printf("%d alo \n",numero);
    cout <<numero<<endl;
    
    return 0;
}
