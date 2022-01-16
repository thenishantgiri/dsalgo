#include <iostream>
using namespace std;

int main()
{
    int deci;
    cout << "Please enter a decimal representation of a binary number" << endl;
    cin >> deci;

    long bin = 0;
    int place = 1;
    while (deci > 0)
    {
        int rem = deci % 2;
        bin += place * rem;

        place *= 10;
        deci /= 2;
    }

    cout << bin << endl;
}