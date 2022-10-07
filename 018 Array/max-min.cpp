#include <climits>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter array length: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxNo = INT_MIN, minNo = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }

    cout << "Max number: " << maxNo << endl;
    cout << "Min number: " << minNo << endl;

    return 0;
}
