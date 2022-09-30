#include <iostream>
#include <math.h>
using namespace std;

int convert(int n)
{
    int i = 0, ans = 0;

    while (n != 0)
    {
        int digit = n % 10;
        ans = ans + (digit * pow(8, i));
        n /= 10;
        i++;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Octal value: ";
    cin >> n;

    cout << "Decimal value: " << convert(n);

    return 0;
}