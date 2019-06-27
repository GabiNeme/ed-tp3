#include "entrada/leituraEntrada.h"

/* Lê a entrada de dados inserida pelo usuário na linha de comandos e
    adiciona às variáveis criadas no main, que são passadas como referência
    para a função.
*/
void leEntrada(int argc, char ** argv, std::string &variacaoQS, std::string &tipoVetor, int &numItens, std::string &exibirVetor){

    // checa se a entrada do usuário está no formato correto
    if (argc < 4 || argc > 6){
        std::cout << "São necessários exatamente três ou quatro argumentos, no formato: " <<
                "<variacao> <tipo> <tamanho> [-p]." << std::endl;
        exit(1);
    }
    // salva as entradas da linha de comando nas variáveis do main
    variacaoQS = argv[1];
    tipoVetor = argv[2];
    numItens = atoi(argv[3]);
    if(argc == 5) {
        exibirVetor = argv[4];
    }

    //verifica se o número inserido pro tamanho do vetor é válido (maior que zero)
    verificaTamanhoVetor(numItens, exibirVetor);
}

/* Verifica se o número inserido pro tamanho do vetor é válido (maior que zero) */
void verificaTamanhoVetor(int numItens, std::string exibirVetor){

    if (numItens < 0){
        std::cout << "O número de itens dos vetores deve ser maior que zero." << std::endl;
        exit(1);
    }
}

