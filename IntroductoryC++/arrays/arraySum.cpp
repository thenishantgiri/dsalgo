#include <iostream>
using namespace std;

int main()
{
    int MAXSIZE = 100;
    int arr[100];

    cout << "Please enter the size of the array" << endl;
    int size;
    cin >> size;

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << sum << endl;
}