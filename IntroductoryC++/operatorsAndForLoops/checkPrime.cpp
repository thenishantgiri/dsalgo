#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a number to check if it's a Prime or Not Prime" << endl;
    cin >> n;

    bool prime = false;
    for (int i = 2; i < n; i++)
    {
        if (n % 2 == 0)
        {
            prime = true;
            break;
        }
    }

    if (!prime)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
}