#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a value for n" << endl;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1, col = 1;
        while (j <= 2 * n)
        {
            if (j == n + 1)
            {
                col = 5;
            }

            if (col <= n - i + 1)
            {
                cout << col;
            }
            else
            {
                cout << "*";
            }

            if (j < n)
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
        i++;
    }
}