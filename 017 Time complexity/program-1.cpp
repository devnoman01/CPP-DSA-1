#include <iostream>
using namespace std;

int main()
{
    int n, a = 0;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        a = a + 1;
    }

    return 0;
}

// Linear Time Complexity. O(n)