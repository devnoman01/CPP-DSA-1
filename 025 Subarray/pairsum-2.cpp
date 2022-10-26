#include <climits>
#include <iostream>
using namespace std;

void pairsum(int arr[], int n, int k)
{
    int low = 0, high = n - 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << "Pair sum matched." << endl;
            cout << arr[low] << "+" << arr[high] << "=" << k;
            return;
        }
        else if (arr[low] + arr[high] < k)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    cout << "Pair sum don't match." << endl;
    return;
}

int main()
{
    int n = 8, k = 31;

    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};

    pairsum(arr, n, k);

    return 0;
}