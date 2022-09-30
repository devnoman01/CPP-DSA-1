#include <iostream>
using namespace std;

int calculate(int n)
{
    int sum = n * (n + 1) / 2;
    return sum;
}

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "Sum is: " << calculate(n) << endl;

    return 0;
}
