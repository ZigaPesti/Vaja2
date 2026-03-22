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

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Uporaba: " << argv[0] << " <vhodna_datoteka>\n";
        return 1;
    }
    ifstream inFile(argv[1]);
    if (!inFile) {
        cerr << "Napaka pri odpiranju vhodne datoteke.\n";
        return 1;
    }
    
    vector<unsigned char> arr;
    int temp;
    while (inFile >> temp) {
        arr.push_back(static_cast<unsigned char>(temp));
    }
    inFile.close();

    binaryRadixSort(arr);
    return 0;
}