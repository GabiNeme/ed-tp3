#ifndef ARVORE_H
#define ARVORE_H

#include <iostream>
#include <string>


struct node_t {
	char caracter;
	node_t * esq;
	node_t * dir;
};

class Arvore {
private:
    node_t *cabeca;

    //função que cria um nó e define seus filhos como nulo
    node_t *criaNode();
    void imprimeNoPreOrdem(node_t * no, std::string codigo);

public:
    Arvore();
    ~Arvore();
    void deleteNode(node_t * apagar);
    void insereNo(char caractere, std::string codigo);
    void imprimePreOrdem();

};

#endif/* ARVORE_H */