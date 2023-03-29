/*Vi?t hàm ð? quy tính t?ng c?a bi?u th?c sau ðây: S(x, n) = x + x^2/2! + x^3/3! + … + x^n/n!*/
#include <iostream>
using namespace std;

double S(double x, int n)
{
    if (n == 0)
        return 1;
    else
        return ((x,n)/(n)) + S(x,n-1);
}
 // Hàm tính giai thua 
int tinhGiaiThua(int n)
{
    if (n == 0)
        return 1;
    else
        return n * (n-1);
}

int main()
{
    double x;
    int n;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Tong S = " << S(x, n);
    return 0;
}

