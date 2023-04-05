#include <iostream>
// https://freetuts.net/de-quy-tuong-ho-mutual-recursion-2961.html
using namespace std;

void even(int n);
void odd(int n);

void even(int n) {
    if (n == 0) {
        return;
    } else {
        cout << n << " ";
        odd(n-1);
    }
}

void odd(int n) {
    if (n == 0) {
        return;
    } else {
        cout << n << " ";
        even(n-1);
    }
}


