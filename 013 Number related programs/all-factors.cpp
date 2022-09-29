#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (n != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << i << " ";
            }
        }
    }
    else
    {
        cout << "Enter another number";
    }

    return 0;
}
