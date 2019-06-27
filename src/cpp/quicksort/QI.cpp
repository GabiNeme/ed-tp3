#include "quicksort/QI.h"
/*
    Quicksort com Inserção: realiza o quicksort clássico enquanto o tamanho do vetor
    é maior que 'limInser'. A partir de então, encaminha para método de ordenação
    por inserção
*/
void QI_Ordena(int vetor[], int Esq, int Dir, long &comp, long &mov, int limInser){
    int i, j;
    //se o tamanho do vetor atual é maior que limInser, prossegue com as chamadas
    // recursivas do quicksort mediana de três
    if((Dir - Esq) > limInser ){
        QM3_Particao(vetor, Esq, Dir, i, j, comp, mov);
        if (Esq < j) QI_Ordena(vetor, Esq, j, comp, mov, limInser);
        if (i < Dir) QI_Ordena(vetor, i, Dir, comp, mov, limInser);
    }else{
        Insercao(vetor, Esq, Dir, comp, mov);
    }
}

