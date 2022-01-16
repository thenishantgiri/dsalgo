#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a number" << endl;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1, col = n;
        while (j < 2 * n)
        {
            if (col <= i)
            {
                cout << col;
            }
            else
            {
                cout << " ";
            }

            if (j < n)
            {
                col--;
            }
            else
            {
                col++;
            }

            j++;
        }
        cout << endl;
        i++;
    }
}