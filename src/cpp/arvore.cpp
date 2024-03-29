#include "arvore.h"

//Construtor
Arvore::Arvore(){
    //cria nó cabeça, com 'próximo' nulo
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

//Função para criar célula vazia e retornar o endereço
node_t * Arvore::criaNode(){
    node_t *no = new node_t();
    no->esq = nullptr;
    no->dir = nullptr;
    no->caracter = '#';
    return  no;
}

//Função que insere um novo caractere na arvore, podendo criar ou não
//nós no caminho
void Arvore::insereNo(char caractere, std::string codigo){

    node_t * no_atual = this->cabeca; //começa pelo nó cabeça

    for (unsigned i=0; i<codigo.length(); i++){ //para cada caractere do código
        if(codigo.at(i) == '.'){ //se for ponto vai para a esquerda
            if(no_atual->esq == nullptr){ //se não tem nó à esquerda, cria
                no_atual->esq = criaNode();
            }
            no_atual = no_atual->esq; //caminha na árvore
        }else if (codigo.at(i) == '-'){ //se for traço vai para a direita
            if(no_atual->dir == nullptr){ //se não tem nó à direita, cria
                no_atual->dir = criaNode();
            }
            no_atual = no_atual->dir;//caminha na árvore
        }else{ //se identificou um caractere não reconhecido, interrompe
            std::cout << "Caractere não reconhecido: " << codigo.at(i) << std::endl;
            exit(0);
        }
    }
    no_atual->caracter = caractere;
}


//Função que, dado um código morse, obtém o caractere correspondente, percorrendo
// a árvore.
char Arvore::buscaCodigo(std::string codigo){
    node_t * no_atual = this->cabeca;//começa pelo nó cabeça

    for (unsigned i=0; i < codigo.length(); i++){//para cada caractere do código
        if(codigo.at(i) == '.'){ //se for ponto vai para a esquerda
            if(no_atual->esq == nullptr){ //se não tem nó à esquerda, não existe esse caractere na árvore
                return '#'; //então retorna o símbolo de vazio
            }
            no_atual = no_atual->esq; //segue o caminho na árvore
        }else if (codigo.at(i) == '-'){ //se for traço vai para a direita
            if(no_atual->dir == nullptr){ //se não tem nó à esquerda, não existe esse caractere na árvore
                return '#'; //então retorna o símbolo de vazio
            }
            no_atual = no_atual->dir;//segue o caminho na árvore
        }else{ //se identificou um caractere não reconhecido, interrompe
            std::cout << "Caractere não reconhecido: " << codigo.at(i) << std::endl;
            exit(0);
        }
    }
    return no_atual->caracter; //retorna o caractere encontrado ao fim da árvore
}


//Método que imprime a árvore e os códigos em pré ordem
void Arvore::imprimePreOrdem(){
    imprimeNoPreOrdem(this->cabeca, "");
}


//Método recursivo que imprime os dados do nó e chama os demais (esquerda e direita)
void Arvore::imprimeNoPreOrdem(node_t * no, std::string codigo){
    if(no->caracter != '#'){ //só imprime se não é um nó vazio
        std::cout << no->caracter << " " << codigo << std::endl;
    }
    //chama recursivamente os lados esquerdo e direito, respectivamente
    if(no->esq != nullptr){
        imprimeNoPreOrdem(no->esq, codigo + ".");
    }
    if(no->dir != nullptr){
        imprimeNoPreOrdem(no->dir, codigo + "-");
    }
}
