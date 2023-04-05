// cài dat phuong phap sap xep chen truc tiep
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, j, x;
    for (i = 1; i < n; i++) {
        x = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > x) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = x;
    }
}

