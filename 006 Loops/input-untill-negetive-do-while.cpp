#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    do
    {
        cout << "Output:" << n << endl;
        cout << "Input: ";
        cin >> n;
    } while (n > 0);

    return 0;
}