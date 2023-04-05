// vidu 
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "mang duoc sx la ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
