#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, counter = 1;
    cout << "Please enter a number" << endl;
    cin >> n;

    while (counter <= n)
    {
        if (counter % 2 == 0)
        {
            sum += counter;
        }
        counter++;
    }

    cout << "Sum of all even numbers till " << n << " : " << sum << endl;
}