#include <array>
#include <iostream>
using namespace std;

int main()
{
    // method-1
    int arr1[10];
    for (int i = 0; i < 10; ++i)
    {
        arr1[i] = 5;
    }
    // arr1[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5}

    // method-2
    int arr2[10];
    fill_n(arr2, 10, 5);
    // arr2[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5}

    // method-3
    array<int, 10> arr3;
    arr3.fill(5);
    // arr3[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5}

    // method-4
    int arr4[10];
    fill(begin(arr4), end(arr4), 5);
    // arr4[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5}

    return 0;
}
