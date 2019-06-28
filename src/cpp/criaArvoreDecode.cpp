#include "criaArvoreDecode.h"

void criaArvoreDecode(Arvore &arvore){
  std::ifstream codMorse ("morse.txt");
  if (codMorse.is_open()){
    std::string word;
    while (codMorse >> word){
        char caractere =  word.at(0);
        codMorse >> word;
        arvore.insereNo(caractere, word);
    }
    codMorse.close();
  }else{
      std::cout << "Arquivo 'morse.txt' não encontrado." << std::endl;
      exit(0);
  }
}