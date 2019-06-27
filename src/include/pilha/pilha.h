#ifndef PILHA_H
#define PILHA_H

#include <iostream>


struct node_t {
	int Esq;
	int Dir;
	node_t *proximo;
};

class Pilha {
private:
    node_t *topo;
    node_t *fundo;

public:
    Pilha();
    ~Pilha();
    void Empilha(int Esq, int Dir);
    void Desempilha(int &Esq, int &Dir);
    bool Vazia();

};

#endif/* PILHA_H */