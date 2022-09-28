#include <iostream>
using namespace std;

int main()
{
    double a = 5.5;
    int sum;

    // implicit conversion
    sum = a + 1;
    cout << sum << endl;

    // explicit conversion
    sum = (int)a + 2;
    cout << sum << endl;

    return 0;
}
