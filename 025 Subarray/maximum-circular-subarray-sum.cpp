#include <climits>
#include <iostream>
using namespace std;

int kadane(int arr[], int n)
{
    int currentSum = 0, maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int wrapsum, nonwrapsum;
    nonwrapsum = kadane(arr, n);
    int totalsum = 0;

    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }

    wrapsum = totalsum + kadane(arr, n);

    cout << "Maximum circular subarray sum: " << max(wrapsum, nonwrapsum) << endl;

    return 0;
}