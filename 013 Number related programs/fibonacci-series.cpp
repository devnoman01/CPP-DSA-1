#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (n == 1)
    {
        cout << "0" << endl;
    }
    else if (n == 2)
    {
        cout << "0 1" << endl;
    }
    else
    {
        int num, a = 0, b = 1, i = 3;
        cout << a << " " << b << " ";

        while (i <= n)
        {
            num = a + b;
            cout << num << " ";
            a = b;
            b = num;
            i++;
        }
        cout << endl;
    }

    return 0;
}
