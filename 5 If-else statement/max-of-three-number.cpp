#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter value of a, b and c:\n";
    cin >> a >> b >> c;

    cout << "Max number: ";
    if (a > b)
    {
        if (a > c)
        {
            cout << a;
        }
        else
        {
            cout << c;
        }
    }
    else
    {
        if (b > c)
        {
            cout << b;
        }
        else
        {
            cout << c;
        }
    }

    return 0;
}