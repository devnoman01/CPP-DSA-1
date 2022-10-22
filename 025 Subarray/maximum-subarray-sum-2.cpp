#include <climits>
#include <iostream>
using namespace std;

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

    int currSum[n + 1];
    currSum[0] = 0;

    // time complexity = O(n^3)
    for (int i = 1; i <= n; i++)
    {
        currSum[i] = currSum[i - 1] + arr[i - 1];
    }

    int maxSum = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = currSum[i] - currSum[j];
            maxSum = max(sum, maxSum);
        }
    }

    cout << "Maximum subarray sum: " << maxSum << endl;

    return 0;
}