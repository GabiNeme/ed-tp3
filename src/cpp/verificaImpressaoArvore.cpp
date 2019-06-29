#include "verificaImpressaoArvore.h"

//Verifica se usuário deseja imprimir a árvore de pesquisa binária utilizada, em pré-ordem
// se sim, imprime a árvore
void verificaImpressaoArvore(int argc, char ** argv, Arvore codigoMorse){
    if(argc > 1){ //apenas se possui pelo menos 2 argumentos
        if (std::string(argv[1]) == "-a"){ // se o segundo argumento é -a
            std::cout << std::endl; //insere linha vazia
            codigoMorse.imprimePreOrdem(); //imprime arvore em pré-ordem
        }
    }
}