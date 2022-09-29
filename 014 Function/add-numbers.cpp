#include <cmath>
#include <iostream>
using namespace std;

int add(int n1, int n2)
{
    int sum = n1 + n2;
    return sum;
}

int main()
{
    int a, b;
    cout << "Enter two number: ";
    cin >> a >> b;

    cout << "Sum is: " << add(a, b);

    return 0;
}
