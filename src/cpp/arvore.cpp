#include "arvore.h"

//Construtor
Arvore::Arvore(){
    //cria nó cabeça, com 'próximo' nulo e faz o fundo e topo apontarem pra ele
    this->cabeca = this->criaNode();
}

//Destrutor
Arvore::~Arvore(){
    //apaga todas as células e libera a memória
    deleteNode(this->cabeca);
}

//Função para deletar recursivamente a árvore
void Arvore::deleteNode(node_t * apagar){
    if(apagar->esq != nullptr){
        deleteNode(apagar->esq);
    }
    if(apagar->dir != nullptr){
        deleteNode(apagar->dir);
    }
    delete apagar;
}

node_t * Arvore::criaNode(){
    node_t *no = new node_t();
    no->esq = nullptr;
    no->dir = nullptr;
    no->caracter = '#';
    return  no;
}


void Arvore::insereNo(char caractere, std::string codigo){

    node_t * no_atual = this->cabeca;

    for (unsigned i=0; i<codigo.length(); i++){
        if(codigo.at(i) == '.'){
            if(no_atual->esq == nullptr){ //se não tem nó à esquerda, cria
                no_atual->esq = criaNode();
            }
            no_atual = no_atual->esq;
        }else if (codigo.at(i) == '-'){
            if(no_atual->dir == nullptr){ //se não tem nó à direita, cria
                no_atual->dir = criaNode();
            }
            no_atual = no_atual->dir;
        }else{
            std::cout << "Caractere não reconhecido: " << codigo.at(i) << std::endl;
            exit(0);
        }
    }
    no_atual->caracter = caractere;
}



char Arvore::buscaCodigo(std::string codigo){
    node_t * no_atual = this->cabeca;

    for (unsigned i=0; i < codigo.length(); i++){
        if(codigo.at(i) == '.'){
            if(no_atual->esq == nullptr){ //se não tem nó à esquerda, cria
                return '#';
            }
            no_atual = no_atual->esq;
        }else if (codigo.at(i) == '-'){
            if(no_atual->dir == nullptr){ //se não tem nó à direita, cria
                return '#';
            }
            no_atual = no_atual->dir;
        }else{
            std::cout << "Caractere não reconhecido: " << codigo.at(i) << std::endl;
            exit(0);
        }
    }
    return no_atual->caracter;
}


//Método que imprime a árvore e os códigos em pré ordem
void Arvore::imprimePreOrdem(){
    imprimeNoPreOrdem(this->cabeca, "");
}


//Método recursivo que imprime os dados do nó e chama os demais (esquerda e direita)
void Arvore::imprimeNoPreOrdem(node_t * no, std::string codigo){
    if(no->caracter != '#'){ //se não é um nó vazio
        std::cout << no->caracter << " " << codigo << std::endl;
    }
    if(no->esq != nullptr){
        imprimeNoPreOrdem(no->esq, codigo + ".");
    }
    if(no->dir != nullptr){
        imprimeNoPreOrdem(no->dir, codigo + "-");
    }
}
