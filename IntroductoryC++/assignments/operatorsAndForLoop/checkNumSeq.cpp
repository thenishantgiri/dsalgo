#include <iostream>
using namespace std;

int main()
{
    int n, prev;
    cout << "Please enter the size of sequence" << endl;
    cin >> n >> prev;

    bool series = true;
    bool isDec = true;
    for (int i = 1; i < n; i++)
    {
        int curr;
        cin >> curr;

        if (curr == prev)
        {
            series = false;
            break;
        }
        else if (curr < prev && !isDec)
        {
            series = false;
            break;
        }
        else if (isDec && curr > prev)
        {
            isDec = false;
        }

        prev = curr;
    }

    if (series)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}