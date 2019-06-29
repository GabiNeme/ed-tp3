#include <iostream>
#include "arvore.h"
#include "fila.h"
#include "criaArvoreDecode.h"
#include "leMsgCriptografada.h"
#include "descriptografa.h"
#include "verificaImpressaoArvore.h"
/*
    O objetivo do presente programa é criar uma árvore binária contendo a codificação
    Morse de forma que seja possível descriptografar mensagens recebidas pela entrada
    padrão.
    Gabriela Peres Neme - ED - DCC - ICEX - UFMG - 2019/1
*/

int main(int argc, char *argv[]){

    Arvore arvoreMorse;
    criaArvoreDecode(arvoreMorse); //lê arquivo morse.txt e cria a árvore binária com a conversão

    Fila frasesCriptografadas; //fila usada para ler todas as entradas do usuário
    leMensagemCriptografada(frasesCriptografadas); //lê a mensagem que o usuário deseja descriptografar
    descriptografa(arvoreMorse, frasesCriptografadas); //descriptografa as mensagens do usuário

    //verifica se usuário pediu para imprimir árvore. Se sim, imprime em pré-ordem
    verificaImpressaoArvore(argc, argv, arvoreMorse); 
}