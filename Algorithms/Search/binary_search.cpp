#include <iostream>

using namespace std;

int binary_search(int* arr, int start, int end, int target);

int main()
{
    int arr[] = {11, 22, 33, 44, 55, 66, 77};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 33;

    int start = 0;
    int end = size - 1;
    int index = binary_search(arr, start, end, target);
    cout << "Target is in index [" << index << "]" << endl;

    return 0;
}

int binary_search(int* arr, int start, int end, int target)
{
    int mid = start + (end - start) / 2;

    if ( arr[mid] == target )
    {
        return mid;
    }
    else if ( arr[mid] > target )
    {
        return binary_search(arr, start, mid - 1, target);
    }
    else
    {
        return binary_search(arr, mid + 1, end, target);
    }

    return -1;
}