#include <iostream>
#include "entrada/leituraEntrada.h"
#include "vetores/ordenaVetores.h"
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

    //declara variáveis de entrada e lê os valores definidos pelo usuário
    std::string variacaoQS, tipoVetor, exibirVetores;
    int tamVet = 0;
    leEntrada(argc, argv, variacaoQS, tipoVetor, tamVet, exibirVetores);

    //declara variáveis de comparação
    int NUM_ITER = 50;
    long media_comp, media_mov;
    int media_tempo;
    std::string vetoresUsados;

    //alimenta função aleatória
    srand(time(nullptr));

    //Cria NUM_ITER vetores, popula de acorodo com tipoVetor, ordena segundo estipulado por variacaoQS e apura a média
    //de comparações, movimentações e mediana do tempo
    ordenaVetores(variacaoQS, tipoVetor, tamVet, media_comp, media_mov, media_tempo, NUM_ITER, vetoresUsados);

    //imprime saida
    imprimeSaida(variacaoQS, tipoVetor, tamVet, media_comp, media_mov, media_tempo, vetoresUsados, exibirVetores);


}