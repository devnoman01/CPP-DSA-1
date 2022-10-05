#include <iostream>
using namespace std;

int main()
{
    int n, a = 0;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a = a + 1;
        }
    }

    return 0;
}

// Quadratic time Complexity. O(n2)