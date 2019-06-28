#include "fila.h"

//Construtor
Fila::Fila(){
    //cria nó cabeça, com 'próximo' nulo e faz o fundo e topo apontarem pra ele
    node_fila *no_cabeca = new node_fila();
    this->frente = no_cabeca;
    no_cabeca->proximo = nullptr;
    this->tras = no_cabeca;
}

//Destrutor
Fila::~Fila(){
    //apaga todas as células e libera a memória
    node_fila *atual = this->frente;
    node_fila *prox = nullptr;
    while (atual != nullptr){
        prox = atual->proximo;
        delete atual;
        atual = prox;
    }
}

//Verifica se a fila está vazia
bool Fila::vazia(){
    return this->frente->proximo == nullptr;
}

//Adiciona elemento ao final da fila
void Fila::enfileira(std::string frase){
    //cria célula e atribui valores estipulados
    node_fila *no_a_inserir = new node_fila();
    no_a_inserir->proximo = nullptr;
    no_a_inserir->frase = frase;

    //insere no final
    this->tras->proximo = no_a_inserir;
    this->tras = no_a_inserir;
}

//Retorna string do primeiro elemento
std::string Fila::desenfileira(){
    //obtém primeiro nó (depois do nó cabeça)
    node_fila *primDaFila;
    primDaFila = this->frente->proximo;

    if (primDaFila == nullptr){ //se não tem primeiro elemento, retorna simbolo "#"
        return "#";
    }else{
        std::string stringAux = primDaFila->frase; //salva a frase do elemento encontrado
        this->frente->proximo = primDaFila->proximo; //redireciona a frente da fila para o antigo segundo lugar
        delete primDaFila; //libera memória
        return stringAux; //retorna frase salva
    }

}
