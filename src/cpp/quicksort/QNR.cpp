#include "quicksort/QNR.h"

/*
    Quicksort não recursivo: realiza o algoritmo quicksort simulando as
    chamadas recursivas através de pilha
*/
void QNR_Ordena(int vetor[], int n, long &comp, long &mov){

    Pilha pilha; //pilha para simular chamadas recursivas
    int e_item, d_item; // campos esq e dir

    //posições minimas e máximas do vetor
    int esq, dir, i, j;
    esq = 0;
    dir = n-1;
    e_item = esq;
    d_item = dir;

    // coloca no fundo da pilha o vetor "total"
    pilha.Empilha(e_item, d_item);

    do{
        //realiza partição e empilha valores
        if (dir > esq) {
            QC_Particao(vetor, esq ,dir,i, j,comp, mov);
            //empilha lado esquerdo
            if ((j-esq)>(dir-i)) { //empilha maior lado
                d_item = j;
                e_item = esq;
                pilha.Empilha(e_item, d_item);
                esq = i;
            //empilha lado direito
            }else {
                e_item = i;
                d_item = dir;
                pilha.Empilha(e_item, d_item);
                dir = j;
            }

        //organização do ultimo trecho concluida, desempilha
        }else {
            pilha.Desempilha(e_item, d_item);
            dir = d_item;
            esq = e_item;
        }
    }while (!pilha.Vazia()); //até que a pilha fique vazia
}