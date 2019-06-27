#include "pilha/pilha.h"

//Construtor
Pilha::Pilha(){
    //cria nó cabeça, com 'próximo' nulo e faz o fundo e topo apontarem pra ele
    node_t *no_cabeca = new node_t();
    this->topo = no_cabeca;
    no_cabeca->proximo = nullptr;
    this->fundo = no_cabeca;
}

//Destrutor
Pilha::~Pilha(){
    //apaga todas as células e libera a memória
    node_t *atual = this->topo;
    node_t *prox = nullptr;
    while (atual != nullptr){
        prox = atual->proximo;
        delete atual;
        atual = prox;
    }
}

//adiciona elemento no topo da pilha
void Pilha::Empilha(int Esq, int Dir){
    //cria célula e atribui valores estipulados
    node_t *no_a_inserir = new node_t();
    this->topo->Esq = Esq;
    this->topo->Dir = Dir;
    //insere no topo
    no_a_inserir->proximo = this->topo;
    this->topo = no_a_inserir;
}

//checa se a pilha está vazia
bool Pilha::Vazia(){
    return (this->topo == this->fundo);
}

/* retira o elemento do topo da lista e atribui às variáveis passadas
 como parâmetro os valores que a célula removida continha */
void Pilha::Desempilha(int &Esq, int &Dir){
    node_t *no_a_apagar = this->topo;
    //verifica se existe elemento para ser retirado
    if (this->Vazia()){
        std::cout << "ERRO: pilha vazia." << std::endl;
        return;
    }
    //redefine o topo
    this->topo = no_a_apagar->proximo;
    delete no_a_apagar;

    //atribui valores da célula desempilhada
    Esq = topo->Esq;
    Dir = topo->Dir;
}
