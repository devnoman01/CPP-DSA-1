#include <iostream>
using namespace std;

int fact(int num)
{
    int a = 1;

    for (int i = 1; i <= num; i++)
    {
        a = a * i;
    }

    return a;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int ans = fact(n);

    cout << "Factorial result: " << ans;

    return 0;
}
