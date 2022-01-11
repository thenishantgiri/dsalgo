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
        int j = 1;
        while (j <= n)
        {
            cout << n << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}