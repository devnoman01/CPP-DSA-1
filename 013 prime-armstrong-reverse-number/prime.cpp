#include <iostream>
using namespace std;

int main()
{
    int n, flag = 0;
    cout << "Enter number: ";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "Prime number";
    }
    else
    {
        cout << "Not prime number";
    }

    return 0;
}
