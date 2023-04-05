
 // -Vidu
int main()
{
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5; 


    int index = linearSearch(arr, n, x);

   
    if(index != -1)
    {
        cout << "vi tri can tim la " << index << endl;
    }
    else
    {
        cout << "Khong tim thay vi tri " << endl;
    }

    return 0;
}
