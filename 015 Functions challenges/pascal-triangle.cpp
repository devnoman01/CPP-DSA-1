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
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fact(i) / (fact(j) * fact(i - j)) << " ";
        }
        cout << endl;
    }

    return 0;
}
