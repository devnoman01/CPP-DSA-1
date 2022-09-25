#include <iostream>
using namespace std;

int main()
{
    int a;
    int *b = &a;

    // *b pointer hold the address of variable a

    cout << b << endl;

    return 0;
}
