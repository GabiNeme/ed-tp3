#include "descriptografa.h"

//A partir das frases criptografadas e da árvore binária de pesquisa
//que contém a codificação Morse, descriptografa a mensagem do usuário
void descriptografa(Arvore &codigoMorse, Fila &frasesCriptografadas){

    while(!frasesCriptografadas.vazia()){ //enquanto a fila não está vazia
        std::string frase = frasesCriptografadas.desenfileira(); //desenfileira frases criptografadas
        std::istringstream ss(frase); //separa por espaços
        // Percorre cada palavra (separada por espaços)
        do {
            std::string codigo;
            ss >> codigo; //lê nova palavra
            if (codigo.compare("/") == 0){ //barra indica separação entre palavras
                std::cout << " ";
            }else if(codigo.length() == 0) { //string vazia não faz nada
                //não faz nada
            }else{ //qualquer outro código deve ser descriptografado
                std::cout << codigoMorse.buscaCodigo(codigo); //imprime código descriptografado
            }
            
        } while (ss); // enquanto ainda existem mais palavras para ler

        std::cout << std::endl; //ao final da frase atual passa para a próxima linha
    }
}