#include "quicksort/QM3.h"
/*
    Quicksort mediana de três: chama a partição e faz a chamada recursiva das partições
    subsequentes
*/
void QM3_Ordena(int vetor[], int Esq, int Dir, long &comp, long &mov){
    int i, j;
    QM3_Particao(vetor, Esq, Dir, i, j, comp, mov);
    if (Esq < j) QM3_Ordena(vetor, Esq, j, comp, mov);
    if (i < Dir) QM3_Ordena(vetor, i, Dir, comp, mov);
}


/*
    Quicksort mediana de três: define pivô como a mediana dos elementos na primeira,
    última e posição média do vetor, então chama procedimento de trocas
*/
void QM3_Particao(int vetor[],int Esq, int Dir, int &i, int &j, long &comp, long &mov){
    int x;
    i = Esq;
    j = Dir;
    //calcula pivô
    x = QM3_mediana (vetor[i], vetor[(i + j)/2], vetor[j], comp) ;
    //realiza as trocas
    iteracaoDeTrocas(vetor, x, i, j, comp, mov);
}

/*
    Calcula a medina de três elementos utilizando o menor número possível
    de comparações a cada conjunto de três números
*/
int QM3_mediana(int n1, int n2, int n3, long &comp){
    if(n1 < n2){ //n3? n1 n3? n2 n3?
        if (n2 < n3){ //n1 n2 n3
            comp = comp + 2;
            return n2;
        }else{ // n3? n1 n3? n2
            if (n1 > n3){
                comp = comp + 3;
                return n1;
            }else{
                comp = comp + 3;
                return n3;
            }
        }
    }else { // n3? n2 n3? n1 n3?
        if (n3 > n1){ //n2 n1 n3
            comp = comp + 2;
            return n1;
        }else{ // n3? n2 n3? n1
            if (n3 < n2){
                comp = comp + 3;
                return n2;
            }else{
                comp = comp + 3;
                return n3;
            }
        }
    }
}