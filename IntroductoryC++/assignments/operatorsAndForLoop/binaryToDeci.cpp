#include <iostream>
using namespace std;

int main()
{
    int bin;
    cout << "Please enter a binary representation of a number" << endl;
    cin >> bin;

    int deci = 0, pow = 1;
    while (bin > 0)
    {
        int digit = bin % 10;
        deci += pow * digit;

        pow *= 2;
        bin /= 10;
    }

    cout << deci << endl;
}