#include <iostream>
using namespace std;

int main()
{
    int x = 5;

    x = (1, 2, 3);

    // right to left priority for values inside brackets ()

    cout << x << endl;

    return 0;
}