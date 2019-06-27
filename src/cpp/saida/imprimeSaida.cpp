#include "saida/imprimeSaida.h"
/*
    Recebe como parâmetor as variáveis de entrada e saída para serem impressas e imprime essas informações, bem
    como imprime os vetores usados na ordenação, caso tenha sido solicitado pelo usuário
*/
void imprimeSaida(std::string variacaoQS, std::string tipoVetor, int numItens, long media_comp,
                long media_mov, int media_tempo, std::string vetoresUsados, std::string exibirVetores){

    // obtêm informações bássicas (tipo de quicksort, tipo de vetor, tamanho do vetor e métricas)
    std::string infoBasicas = imprimeInfoBasicas(variacaoQS, tipoVetor, numItens, media_comp, media_mov, media_tempo);
    std::cout << infoBasicas;

    // imprime vetores usados na ordenação
    if (exibirVetores.compare("-p") == 0) {
        std::cout << vetoresUsados;
    }

}

// Organiza em uma string a impressão das informações bássicas (tipo de quicksort, tipo de vetor,
    //tamanho do vetor e métricas)
std::string imprimeInfoBasicas(std::string variacaoQS, std::string tipoVetor, int numItens, long media_comp,
long media_mov, int media_tempo){
    std::stringstream ss;
    ss << variacaoQS << " " << tipoVetor << " " << numItens << " ";
    ss << media_comp << " " << media_mov << " " << media_tempo << std::endl;

    return ss.str();
}
