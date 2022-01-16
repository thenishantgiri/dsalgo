#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter the number of inputs" << endl;
    cin >> n;

    int large = INT_MIN;
    int secondLarge = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;

        if (num > large)
        {
            secondLarge = large;
            large = num;
        }
        else if (num > secondLarge && num != large)
        {
            secondLarge = num;
        }
    }
    cout << secondLarge << endl;
}