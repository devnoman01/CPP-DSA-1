#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }

        int c = 1;
        for (int k = 1; k <= i; k++)
        {
            cout << c << " ";
            c = c * (i - k) / k;
        }
        cout << "\n";
    }

    return 0;
}
