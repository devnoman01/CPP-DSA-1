#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int s = 0, e = size;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int n, key;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Search value: ";
    cin >> key;

    int found = binarySearch(arr, n, key);

    if (found == -1)
    {
        cout << key << " is absent" << endl;
    }
    else
    {
        cout << key << " is present at position " << found << endl;
    }

    return 0;
}
