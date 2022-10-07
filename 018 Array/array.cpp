#include <iostream>
using namespace std;

int main()
{
    // array declaration
    int arr1[10];

    // declaration by initializing elements
    int arr2[5] = {1, 2, 3, 4, 5};

    // creating array with manual length
    int n;
    cout << "Enter array length: ";
    cin >> n;

    int arr3[n];

    // input array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr3[i];
    }

    // print array element
    for (int i = 0; i < n; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}
