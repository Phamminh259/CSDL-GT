int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = 0;
    int total = sum(arr, size, result);
    cout << " chuoi ki tu dau cua mang la " << total << endl;
    return 0;
}
