#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void alternateSwap(int arr[], int size)
{
    int start = 0, end = 1;
    while (end <= size)
    {
        swap(arr[start], arr[end]);
        start += 2;
        end += 2;
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};

    cout << "Before swap: ";
    printArray(arr, 6);

    alternateSwap(arr, 6);

    cout << "After swap: ";
    printArray(arr, 6);

    return 0;
}
