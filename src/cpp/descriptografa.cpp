#include "descriptografa.h"

void descriptografa(Arvore &codigoMorse, Fila &frasesCriptografadas){

    while(!frasesCriptografadas.vazia()){
        std::string frase = frasesCriptografadas.desenfileira();
        std::istringstream ss(frase);
            // Traverse through all words
        do {
            // Read a word
            std::string codigo;
            ss >> codigo;
            if (codigo.compare("/") == 0){
                std::cout << " ";
            }else{
                std::cout << "chamou para |" << codigo << "|" << std::endl;
                //std::cout << codigoMorse.buscaCodigo(codigo);
            }


            // While there is more to read
        } while (ss);

        std::cout << std::endl;
    }
}