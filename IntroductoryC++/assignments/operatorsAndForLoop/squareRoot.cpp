#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a number" << endl;
    cin >> n;

    int sqrt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i * i <= n)
        {
            sqrt = i;
        }
        else
        {
            break;
        }
    }

    cout << sqrt << endl;
}