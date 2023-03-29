#include <iostream>
using namespace std;

int sumMang(float arr[], int n) {
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
int main()
{
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    float arr[n];
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = sumMang(arr, n);
    cout << "So luong gia tri duong trong mang la: " << count << endl;

    return 0;
}





