//  ViDu
int main()
{
    int arr[] = { 2, 5, 7, 8, 10, 12, 15 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        cout << "khong tim thay vi tri";
    else
        cout << "vi tri can tim la " << result;
    return 0;
}
 
