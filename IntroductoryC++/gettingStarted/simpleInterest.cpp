#include <iostream>
using namespace std;

int main()
{
    int p, r, t;
    cout << "Enter Principle amount, Rate of interest and Time" << endl;

    cin >> p >> r >> t;

    int si = (p * r * t) / 100;
    cout << "Simple Interest: " << si << endl;
}