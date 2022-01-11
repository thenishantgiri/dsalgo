#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a value of n" << endl;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int val = 1;
        while (j < 2 * n)
        {
            if (val <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }

            if (j < n)
            {
                val++;
            }
            else
            {
                val--;
            }
            j++;
        }
        cout << endl;
        i++;
    }
}