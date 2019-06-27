#include "quicksort/QC.h"
#include "quicksort/QM3.h"
#include "quicksort/QPE.h"
#include "quicksort/QI.h"
#include "quicksort/QNR.h"
#include <iostream>
#include <string>
#include <chrono>

void QuickSort(int vetor[], int n, std::string tipoQuickSort, long &comp, long &mov, int &temp);