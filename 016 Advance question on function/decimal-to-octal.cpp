#include <iostream>
#include <math.h>
using namespace std;

int convert(int n)
{
    int i = 1, ans = 0;

    while (n != 0)
    {
        int rem = n % 8;
        ans = ans + (rem * i);
        n /= 8;
        i *= 10;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Decimal value: ";
    cin >> n;

    cout << "Octal value: " << convert(n);

    return 0;
}