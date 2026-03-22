#include <iostream>
#include <vector>
#include <fstream>
#include "sort.h" 

using namespace std;

void binaryRadixSort(vector<unsigned char>& arr) {
    for (int k = 0; k < 8; k++) {
        countingSortByBit(arr, k);
    }
}