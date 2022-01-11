#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Please enter two numbers" << endl;

    cin >> a >> b;

    if (a == b)
    {
        cout << a << " and " << b << " are equal" << endl;
    }
    else if (a < b)
    {
        cout << a << " is smaller than " << b << endl;
    }
    else
    {
        cout << a << " is greater than " << b << endl;
    }
}