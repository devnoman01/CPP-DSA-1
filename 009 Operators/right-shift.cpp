#include <iostream>
using namespace std;

int main()
{
    int a = 8;
    cout << "Before right shift: " << a << endl;

    a = a >> 1;
    // 1 bit right shift

    cout << "After right shift: " << a << endl;

    return 0;
}
