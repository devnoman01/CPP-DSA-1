#include <iostream>
using namespace std;

int main()
{
    int r, c, n;
    cout << "Enter row and col size: ";
    cin >> r >> c;

    int arr[r][c];

    cout << "Enter array elements: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Enter search element: ";
    cin >> n;

    bool flag = false;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == n)
            {
                flag = true;
            }
        }
    }

    if (flag)
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}