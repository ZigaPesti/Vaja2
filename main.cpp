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

int main() {
    vector<unsigned char> arr;
    unsigned int val;

    // Beremo vrednosti iz stdin
    while (cin >> val) {
        arr.push_back((unsigned char)val);
    }

    if (arr.empty()) {
        cerr << "Napaka: ni vhodnih podatkov." << endl;
        return 1;
    }

    binaryRadixSort(arr);

    for (unsigned char c : arr) {
        cout << (unsigned int)c << "\n";
    }

    return 0;
}
