#include <iostream>
using namespace std;

int main()
{
    int r, c;
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

    cout << "Array output: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}