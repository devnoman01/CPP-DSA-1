#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int n, flag = 0;
    cout << "Enter number: ";
    cin >> n;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Not prime number";
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "Prime number";
    }

    return 0;
}
