#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a number to find all the prime numbers in between" << endl;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << i << endl;
        }
    }
}