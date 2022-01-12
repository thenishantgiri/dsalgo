#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a value for n" << endl;
    cin >> n;

    int i = 1, row = 1;
    while (i <= n)
    {
        int j = 1, col = 1;
        while (j <= n)
        {
            if (col <= n / 2 - row + 1)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }

            if (j <= n / 2)
            {
                col++;
            }
            else
            {
                col--;
            }

            j++;
        }
        cout << endl;

        if (i <= n / 2)
        {
            row++;
        }
        else
        {
            row--;
        }

        i++;
    }
}