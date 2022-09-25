#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, c;

    a < b ? c = a : c = b;
    cout << c << endl;

    a > b ? c = a : c = b;
    cout << c << endl;

    return 0;
}
