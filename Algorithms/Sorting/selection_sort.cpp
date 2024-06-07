#include <iostream>

using namespace std;

void swap(int& el1, int& el2);
void selection_sort(int* arr, int size);
void print(int* arr, int size);

int main()
{
    int arr[] = {55, 74, 63, 82, 241, 11, 32, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, size);
    print(arr, size);

    return 0;
}

void swap(int& el1, int& el2)
{
    int tmp = el1;
    el1 = el2;
    el2 = tmp;
}

void selection_sort(int* arr, int size)
{
    int min{};

    for ( int i = 0; i < size; ++i )
    {
        min = i;
        for ( int j = i + 1; j < size; ++j )
        {
            if ( arr[j] < arr[min] )
            {
                min = j;
            }
        }

        swap(arr[i], arr[min]);

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