#include <iostream>

using namespace std;

void bubble_sort(int* ptr, size_t size);
void print(int* arr, int size);

int main()
{
    int arr[] = {55, 44, 33, 22, 11};
    int arr2[] = {11, 22, 33, 44, 55};
    int arr3[] = {55, 11, 66, 77, 88};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, size);
    print(arr, size);

    bubble_sort(arr2, size);
    print(arr2, size);

    bubble_sort(arr3, size);
    print(arr3, size);

    return 0;
}

void bubble_sort(int* ptr, size_t size)
{
    bool flag = true;

    for ( int i = 0; i < size - 1; ++i )
    {
        for ( int j = 0; j < size - 1; ++j )
        {
            if ( ptr[j] > ptr[j + 1] )
            {
                int tmp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = tmp;
                flag = false;
            }
        }

        if ( flag ) break;
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