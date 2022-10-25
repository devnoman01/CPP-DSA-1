#include <climits>
#include <iostream>
using namespace std;

void pairsum(int arr[], int n, int k)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << "Pair sum matched." << endl;
                cout << arr[i] << "+" << arr[j] << "=" << k;
                return;
            }
        }
    }
    cout << "Pair sum don't match." << endl;
    return;
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

    pairsum(arr, n, k);

    return 0;
}