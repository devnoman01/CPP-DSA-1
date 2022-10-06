#include <iostream>
using namespace std;

int main()
{
    int m, n, a = 0;
    cout << "Enter value of m and n: ";
    cin >> m >> n;

    for (int i = 1; i <= m; i++)
    {
        a = a + 1;
    }

    for (int j = 1; j <= n; j++)
    {
        a = a + 1;
    }

    cout << a;

    return 0;
}

// Time Complexity: O(m+n)