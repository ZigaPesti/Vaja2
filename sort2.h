#ifndef SORT2_H
#define SORT2_H
#include "sort.h" 

void binaryRadixSort(vector<unsigned char>& arr) {
    for (int k = 0; k < 8; k++) {
        countingSortByBit(arr, k);
    }
}

#endif