#include <iostream>
using namespace std;

int fact(int num)
{
    int a = 1;

    for (int i = 2; i <= num; i++)
    {
        a *= i;
    }

    return a;
}

int main()
{
    int n, r;
    cout << "Enter value of n and r: ";
    cin >> n >> r;

    int ans = fact(n) / (fact(r) * fact(n - r));

    cout << "nCr result: " << ans;

    return 0;
}
