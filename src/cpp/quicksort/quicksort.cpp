#include "quicksort/quicksort.h"

/*
    Identifica o tipo de quicksort escolhido pelo usuário, chama o procedimento correspondente
    e faz a medição do tempo necessário para executar
*/
void QuickSort(int vetor[], int n, std::string tipoQuickSort, long &comp, long &mov, int &temp){
    using namespace std::chrono;
    // Pega o horário do sistema antes da execução do código
    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    //Identifica tipo de ordenação escolhida pelo usuário e chama a função
    //correspondente à escolhida
    if (tipoQuickSort.compare("QC") == 0){
        QC_Ordena(vetor, 0, n-1, comp, mov);
    }else if  (tipoQuickSort.compare("QM3") == 0){
        QM3_Ordena(vetor, 0, n-1, comp, mov);
    }else if  (tipoQuickSort.compare("QPE") == 0){
        QPE_Ordena(vetor, 0, n-1, comp, mov);
    }else if  (tipoQuickSort.compare("QI1") == 0){
        int limiteInsercao = n/100;
        QI_Ordena(vetor, 0, n-1, comp, mov, limiteInsercao);
    }else if  (tipoQuickSort.compare("QI5") == 0){
        int limiteInsercao = n/20;
        QI_Ordena(vetor, 0, n-1, comp, mov, limiteInsercao);
    }else if  (tipoQuickSort.compare("QI10") == 0){
        int limiteInsercao = n/10;
        QI_Ordena(vetor, 0, n-1, comp, mov, limiteInsercao);
    }else if  (tipoQuickSort.compare("QNR") == 0){
        QNR_Ordena(vetor, n, comp, mov);
    }else{
        std::cout << "Variação do Quicksort não encontrada. As opções disponíveis são QC, QM3, QPE, QI1, QI5, QI10, QNR." << std::endl;
        exit(1);
    }

    // Pega o horário do sistema depois da execução do código
    high_resolution_clock::time_point t2 = high_resolution_clock::now();

    //contabiliza o tempo
    duration<double, std::micro> elapsed_time = duration_cast<duration<double>>(t2 - t1);

    temp = elapsed_time.count();

}
