#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Please input a stream of characters(terminted by $)" << endl;

    int charCount = 0, digitCount = 0, whiteSpacesCount = 0;
    do
    {
        ch = cin.get();

        if (ch >= 'a' && ch <= 'z')
        {
            charCount++;
        }
        else if (ch == ' ' || ch == '\t' || ch == '\n')
        {
            whiteSpacesCount++;
        }
        else if (int(ch) >= 48 && int(ch) <= 57)
        {
            digitCount++;
        }

    } while (ch != '$');

    cout << charCount << " " << digitCount << " " << whiteSpacesCount << endl;
}