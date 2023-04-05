// cài dat phuong phap sap xep chon truc tiep
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    int i, j, min, temp;
    for (i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min])
                min = j;
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

