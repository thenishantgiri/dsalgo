#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a number" << endl;
    cin >> n;

    int d = 2;
    bool divided = false;
    while (d < n)
    {
        if (n % d == 0)
        {
            cout << "Not Prime" << endl;
            divided = true;
            break;
        }

        d++;
    }
    
    if (!divided)
    {
        cout << "Prime" << endl;
    }
}