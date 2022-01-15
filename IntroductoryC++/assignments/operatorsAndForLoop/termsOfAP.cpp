#include <iostream>
using namespace std;

int main()
{
    int x, count = 0;
    cout << "Please enter an integer" << endl;
    cin >> x;

    for (int i = 1; i <= 10000; i++)
    {
        int ap = (3 * i) + 2;

        if (ap % 4 == 0)
        {
            continue;
        }
        else
        {
            count++;
            cout << ap << " ";
        }

        if (count == x)
        {
            break;
        }
    }
    cout << endl;
}