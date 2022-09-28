#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Binary value: ";
    cin >> n;

    int i = 0, ans = 0;

    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        n /= 10;
        i++;
    }

    cout << "Decimal value: " << ans;

    return 0;
}