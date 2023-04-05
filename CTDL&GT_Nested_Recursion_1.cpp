// https://freetuts.net/de-quy-long-nested-recursion-2959.html

#include <iostream>
using namespace std;

void outer(int n) {
    if (n > 0) {
        cout << "Outer call " << n << endl;
        inner(n-1);
    }
}



void inner(int n) {
    if (n > 0) {
        cout << "Inner call " << n << endl;
        outer(n-1);
    }
}
