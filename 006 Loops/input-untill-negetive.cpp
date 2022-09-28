#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    while (n > 0)
    {
        cout << "Output:" << n << endl;
        cout << "Input: ";
        cin >> n;
    }

    return 0;
}