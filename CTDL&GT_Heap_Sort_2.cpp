int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    cout << "mang duoc sap xep la";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    return 0;
}
