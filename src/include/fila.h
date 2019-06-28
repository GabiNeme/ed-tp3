#ifndef FILA_H
#define FILA_H

#include <iostream>
#include <string>

struct node_fila {
	std::string frase;
	node_fila *proximo;
};

class Fila {
private:
    node_fila *frente;
    node_fila *tras;

public:
    Fila();
    ~Fila();
    bool vazia();
    void enfileira(std::string frase);
    std::string desenfileira();

};

#endif/* FILA_H */