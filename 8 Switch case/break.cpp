#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a letter from a to d: ";
    cin >> ch;

    /*
    if (ch == 'a')
    {
        cout << "Apple" << endl;
    }
    else if (ch == 'b')
    {
        cout << "Ball" << endl;
    }
    else if (ch == 'c')
    {
        cout << "Cat" << endl;
    }
    else if (ch == 'd')
    {
        cout << "Doll" << endl;
    }
    else if (ch == 'e')
    {
        cout << "Egg" << endl;
    }
    else
    {
        cout << "Something different" << endl;
    }
    */

    switch (ch)
    {
    case 'a':
        cout << "Apple" << endl;
        break;
    case 'b':
        cout << "Ball" << endl;
        break;
    case 'c':
        cout << "Cat" << endl;
        break;
    case 'd':
        cout << "Doll" << endl;
        break;
    case 'e':
        cout << "Egg" << endl;
        break;
    default:
        cout << "Something else" << endl;
        break;
    }

    return 0;
}
