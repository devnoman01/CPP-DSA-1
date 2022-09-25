#include <iostream>
using namespace std;

int main()
{
    int a = 8;
    cout << "Before left shift: " << a << endl;

    a = a << 1;
    // 1 bit left shift

    cout << "After left shift: " << a << endl;

    return 0;
}
