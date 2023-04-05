int main() {
    int n = 5;

    int total = sum(n, 0);
    cout << "The sum of the first " << n << " numbers is: " << total << endl;

    int sum_squares = sum_of_squares(n, 0);
    cout << "The sum of the squares of the first " << n << " numbers is: " << sum_squares << endl;

    return 0;
}
