#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Please enter a character" << endl;
    cin >> c;

    if (int(c) >= 65 && int(c) <= 90)
    {
        cout << "1" << endl;
    }
    else if (int(c) >= 97 && int(c) <= 122)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}