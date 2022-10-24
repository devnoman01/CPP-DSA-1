#include <climits>
#include <iostream>
using namespace std;

bool pairsum(int arr[], int n, int k)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << arr[i] << "+" << arr[j] << "=" << k;
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n, k;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter sum value: ";
    cin >> k;

    cout << pairsum(arr, n, k) << endl;

    return 0;
}