#ifndef SORT_H
#define SORT_H
#include <vector>

using namespace std;

void countingSortByBit(vector<unsigned char>& arr, int k) {
    int n = arr.size();
    vector<unsigned char> output(n);
    int count[2] = {0, 0};
    for (int i = 0; i < n; i++) {
        int bit = (arr[i] >> k) & 1;
        count[bit]++;
    }
    count[1] += count[0];
    for (int i = n - 1; i >= 0; i--) {
        int bit = (arr[i] >> k) & 1;
        output[count[bit] - 1] = arr[i];
        count[bit]--;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}
#endif