//https://freetuts.net/thuat-toan-tim-kiem-tuyen-tinh-2630.html
// tim kiem tuyen tinh -Cai dat
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x)
{
   
    for(int i = 0; i < n; i++)
    {
    
        if(arr[i] == x)
        {
            return i;
        }
    }

   
    return -1;
} 
