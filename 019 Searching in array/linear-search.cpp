#include <iostream>
using namespace std;

int search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
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

    int found = search(arr, n, key);

    if (found == -1)
    {
        cout << "Key is absent" << endl;
    }
    else
    {
        cout << "Key is present at position " << found << endl;
    }

    return 0;
}
