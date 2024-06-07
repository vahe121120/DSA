#include <iostream>

using namespace std;

void insertion_sort(int* arr, int size);
void print(int* arr, int size);

int main()
{
    int arr[] = {55, 12, 4, 38, 42, 98};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, size);
    print(arr, size);
    
    return 0;
}

void insertion_sort(int* arr, int size)
{
    for ( int i = 1; i < size; ++i )
    {
        int result = arr[i];
        int j = i - 1;

        while ( j >= 0 && arr[j] > result )
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = result;
    }
}

void print(int* arr, int size)
{
    for ( int i = 0; i < size; ++i )
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}