#include <iostream>
using namespace std;

int main()
{
    int n, c;
    cout << "Please enter the number and your choice" << endl;
    cin >> n >> c;

    if (c == 1)
    {
        int sum = 0;
        while (n > 0)
        {
            sum += n;
            n--;
        }

        cout << sum << endl;
    }
    else if (c == 2)
    {
        int product = 1;
        while (n > 0)
        {
            product *= n;
            n--;
        }

        cout << product << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}