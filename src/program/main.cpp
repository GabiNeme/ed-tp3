#include <iostream>
#include "arvore.h"
#include "fila.h"
#include "criaArvoreDecode.h"
#include "leMsgCriptografada.h"
#include "descriptografa.h"
/*
    O objetivo do presente programa é permitir a análise de eficiência de diversas versões do
    método de orndeação Quicksort. Para isso, o usuário deve entrar o tipo de quicksort
    desejado, o tipo de ordenação inicial do vetor e o tamanho do vetor e, na saída padrão,
    serão exibidas as médias do número de comparações, média do número de movimentações
    entre elementos do vetor e mediana de tempo gasto na ordenação.
    Gabriela Peres Neme - ED - DCC - ICEX - UFMG - 2019/1
*/

int main(int argc, char *argv[]){

    Arvore arvoreMorse;
    criaArvoreDecode(arvoreMorse);

    Fila frasesCriptografadas;
    leMensagemCriptografada(frasesCriptografadas);
    descriptografa(arvoreMorse, frasesCriptografadas);

    //std::cout<< arvoreMorse.buscaCodigo("-..-") << std::endl;
    std::cout << frasesCriptografadas.desenfileira() << std::endl;


    //std::cout << frasesCriptografadas.desenfileira() << std::endl;
    //teste.imprimePreOrdem();
}