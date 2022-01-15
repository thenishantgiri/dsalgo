#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a value to find nth Fibonacci" << endl;
    cin >> n;

    int a = 0, b = 1, fib = 0;

    for (int i = 0; i <= n; i++)
    {
        fib = a;

        int temp = a + b;
        a = b;
        b = temp;
    }

    cout << fib << endl;
}