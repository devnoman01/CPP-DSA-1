#include <iostream>
using namespace std;

void print(int n)
{
    cout << "Your input: " << n << endl;
    return;
}

int main()
{
    int a;
    cout << "Enter number: ";
    cin >> a;

    print(a);

    return 0;
}