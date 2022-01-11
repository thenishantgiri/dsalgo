#include <iostream>
using namespace std;

int main()
{
    int x, n;
    cout << "Please enter the integer and it's power" << endl;
    cin >> x >> n;

    int counter = 1;
    int power = 1;
    while (counter <= n)
    {
        power = power * x;
        counter++;
    }

    cout << power << endl;
}