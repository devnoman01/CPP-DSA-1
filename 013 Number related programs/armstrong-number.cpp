#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int sum = 0, num = n;

    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }

    if (num == sum)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "Not armstrong number" << endl;
    }

    return 0;
}
