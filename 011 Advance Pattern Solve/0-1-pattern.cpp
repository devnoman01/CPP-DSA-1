#include <iostream>
using namespace std;

int main()
{
    int row, i, j, k;
    cout << "Enter row no: ";
    cin >> row;

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}
