#include <iostream>
using namespace std;

int sumMang(int arr[], int n) {
    if (n == 0) { 
        return 0;
    } else {
        int sum = sumMang(arr, n-1); 
        if (arr[n-1] > 0) { 
            sum ++;
        }
        return sum;
    }
}
int main() {
    int arr[] = {200, 30, 10, };
    // tính so phan tu co trong mang 
	int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Tong cac so chan trong mang la: " << sumMang(arr, n) << endl;
    return 0;
}

