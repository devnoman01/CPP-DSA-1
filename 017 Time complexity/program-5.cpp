#include <iostream>
using namespace std;

int main()
{
    int n, a = 0;
    cout << "Enter value of n: ";
    cin >> n;
    int i = n;

    while (i >= 1)
    {
        a = a + 1;
        i /= 2;
    }

    cout << a;

    return 0;
}

// Time Complexity. O(log(n))