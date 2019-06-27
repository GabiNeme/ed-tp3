#include <iostream>
#include "arvore.h"
#include "entrada/leituraEntrada.h"
#include "saida/imprimeSaida.h"
/*
    O objetivo do presente programa é permitir a análise de eficiência de diversas versões do
    método de orndeação Quicksort. Para isso, o usuário deve entrar o tipo de quicksort
    desejado, o tipo de ordenação inicial do vetor e o tamanho do vetor e, na saída padrão,
    serão exibidas as médias do número de comparações, média do número de movimentações
    entre elementos do vetor e mediana de tempo gasto na ordenação.
    Gabriela Peres Neme - ED - DCC - ICEX - UFMG - 2019/1
*/

int main(int argc, char *argv[]){

    Arvore teste;
    teste.insereNo('E',".");
    teste.insereNo('U',"..");
    teste.insereNo('F',".-");
    teste.insereNo('G',"--");
    teste.insereNo('M',"-.");

    teste.imprimePreOrdem();

}