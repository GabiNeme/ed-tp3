#include "criaArvoreDecode.h"

//cria a árvore binária de pesquisa através do arquivo "morse.txt"
void criaArvoreDecode(Arvore &arvore){
  std::ifstream codMorse ("morse.txt"); //abre arquivo

  if (codMorse.is_open()){
    std::string word;
    while (codMorse >> word){ //obtém cada palavra do arquivo
        char caractere =  word.at(0); //primeira é o caractere
        codMorse >> word; // a segunda é o código
        arvore.insereNo(caractere, word); //insere caractere e código morse na árvore
    }
    codMorse.close(); //fecha arquivo
  }else{ //erro caso o arquivo não esteja no local certo
      std::cout << "Arquivo 'morse.txt' não encontrado." << std::endl;
      exit(0);
  }
}