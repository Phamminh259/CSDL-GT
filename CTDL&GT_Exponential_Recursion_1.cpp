// https://codehow.net/de-quy-da-tuyen-exponential-recursion-trong-c-c++-90.html
#include <iostream>
using namespace std;

int sum(int n, int current_sum);
int sum_of_squares(int n, int current_sum);

int main() {
    int n = 5;

    int total = sum(n, 0);
    cout << "The sum of the first " << n << " numbers is: " << total << endl;

    int sum_squares = sum_of_squares(n, 0);
    cout << "The sum of the squares of the first " << n << " numbers is: " << sum_squares << endl;

    return 0;
}

int sum(int n, int current_sum) {
    if (n == 0) {
        return current_sum;
    } else {
        return sum(n - 1, current_sum + n);
    }
}

int sum_of_squares(int n, int current_sum) {
    if (n == 0) {
        return current_sum;
    } else {
        return sum_of_squares(n - 1, current_sum + n*n);
    }
}
