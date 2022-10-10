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

int findUniqueElement(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[7] = {2, 3, 4, 5, 3, 2, 4};

    cout << "Input array: ";
    printArray(arr, 7);

    cout << "Unique element: " << findUniqueElement(arr, 7);

    return 0;
}
