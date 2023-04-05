
// https://blog.luyencode.net/thuat-toan-tim-kiem-nhi-phan/
//  Tim kiem nhi phan - Cai dat
#include <iostream>
using namespace std;
int binarySearch(int arr[], int left, int right, int x)
{
    if (left > right) {
        return -1;
    }
    int pivot = (left + right) / 2;
    if (arr[pivot] == x) {
        return pivot;
    } else if (arr[pivot] > x) {
        return binarySearch(arr, left, pivot - 1, x);
    } else {
        return binarySearch(arr, pivot + 1, right, x);
    }
}


