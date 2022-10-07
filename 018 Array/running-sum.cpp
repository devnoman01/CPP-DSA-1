#include <climits>
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter array length: ";
    cin >> n;

    int arr1[n], arr2[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        sum += arr1[i];
        arr2[i] = sum;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}
