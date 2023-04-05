// https://codehow.net/de-quy-duoi-tail-recursion-trong-c-c++-88.html
#include <iostream>
using namespace std;

int sum(int arr[], int size, int result) {
    if (size == 0) {
        return result;
    } else {
        result += arr[size-1];
        return sum(arr, size-1, result);
    }
}
