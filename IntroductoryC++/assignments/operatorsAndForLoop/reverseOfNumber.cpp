#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a number" << endl;
    cin >> n;

    int newNum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        newNum = (newNum * 10) + digit;
        n = n / 10;
    }

    cout << newNum << endl;
}