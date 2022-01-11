#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a value for n" << endl;
    cin >> n;

    int i = 1;
    int num = i;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << num << " ";
            num++;
            j++;
        }
        cout << endl;
        i++;
    }
}