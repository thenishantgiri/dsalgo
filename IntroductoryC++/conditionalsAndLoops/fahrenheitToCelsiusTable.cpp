#include <iostream>
using namespace std;

int main()
{
    int S, E, W;
    cout << "Please enter the Start Fahrenheit Value (S), End Fahrenheit Value (E), and Step Size (W)" << endl;

    cin >> S >> E >> W;
    while (S <= E)
    {
        int cel = (5.0 / 9) * (S - 32);
        cout << S << "\t" << cel << endl;
        S += W;
    }
}