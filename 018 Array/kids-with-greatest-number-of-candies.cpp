#include <array>
#include <iostream>

using namespace std;

int main()
{
    int candies[5] = {2, 3, 5, 1, 3}, extraCandies = 3;

    cout << "Input array: ";
    for (auto i : candies)
    { // C++11
        cout << i << " ";
    }

    bool result[5];
    int maxNum = INT_MIN;

    for (int i = 0; i < 5; i++)
    {
        maxNum = max(maxNum, candies[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if ((candies[i] + extraCandies) >= maxNum)
        {
            result[i] = (true);
        }
        else
        {
            result[i] = (false);
        }
    }

    cout << "Output array: ";
    for (auto j : result)
    { // C++11
        cout << j << " ";
    }

    return 0;
}
