#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter the value for n" << endl;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1, num = 1;
        while (j <= n)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << num;
                num++;
            }
            j++;
        }
        cout << endl;
        i++;
    }
}