#include <iostream>
using namespace std;

int main()
{
    int bitwiseOr = 15 | 30;         // if any of the bit is 1, it sets the resulting bit to 1
    int bitwiseAnd = 15 & 30;        // if both of the bit is 1, it sets the resulting bit to 1
    int bitwiseNot = ~15;            // converts all 1's to 0's and vice-versa
    int bitwiseXor = 15 ^ 30;        // if only one bit is 1, it sets the resulting bit to 1
    int bitwiseLeftShift = 15 << 2;  // generally multiplies the value on the left with power of 2 entered on the right
    int bitwiseRightShift = 15 >> 2; // generally multiplies the value on the left with power of 2 entered on the right

    cout << bitwiseOr << endl;
    cout << bitwiseAnd << endl;
    cout << bitwiseNot << endl;
    cout << bitwiseXor << endl;
    cout << bitwiseLeftShift << endl;
    cout << bitwiseRightShift << endl;
}