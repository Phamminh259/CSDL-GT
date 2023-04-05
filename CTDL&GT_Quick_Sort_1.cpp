//https://blog.luyencode.net/thuat-toan-sap-xep-quick-sort/
// c�i dat phuong phap sap xep nhanh
#include <iostream>
using namespace std;
int quickSort(int arr[], int left, int right)
{
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];
	 while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    };
	  if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
} 
