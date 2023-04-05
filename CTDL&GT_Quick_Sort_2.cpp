// vi du

int main() {

    int arr[] = { 5, 2, 8, 12, 1, 7, 6, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "mang duoc sap xep la ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
} 
