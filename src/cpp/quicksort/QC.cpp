#include "quicksort/QC.h"

/*
    Quicksort Clássico: realiza a partição e a chamada recursiva das partições
    subsequentes
*/
void QC_Ordena(int vetor[], int Esq, int Dir, long &comp, long &mov){
    int i, j;
    QC_Particao(vetor, Esq, Dir, i, j, comp, mov);
    if (Esq < j) QC_Ordena(vetor, Esq, j, comp, mov);
    if (i < Dir) QC_Ordena(vetor, i, Dir, comp, mov);
}


/*
    Quicksort Clássico: define pivô e chama procedimento de trocas
*/
void QC_Particao(int vetor[],int Esq, int Dir, int &i, int &j, long &comp, long &mov){
    int x;

    i = Esq;
    j = Dir;
    x = vetor[(i + j)/2];
    iteracaoDeTrocas(vetor, x, i, j, comp, mov);

}

/*
    Procedimento que recebe a posição do pivô x, as variáveis de início de troca
    i e j e realiza as trocas dos elementos menores e maiores que o pivô,
    além de contabilizar as métricas comprimento e movimentações
*/
void iteracaoDeTrocas(int vetor[], int x, int &i, int &j, long &comp, long &mov){
    int w;
    do {
        //procura elemento menor que o pivô
        while (x > vetor[i]){
            i++;
            comp++;
        }
        //procura elemento maior que o pivô
        while (x < vetor[j]){
            j--;
            comp++;
        }
        //realiza a troca entre os elementos encontrados
        if (i <= j) {
            w = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = w;
            i++;
            j--;
            mov++;
        }
    } while (i <= j);
}