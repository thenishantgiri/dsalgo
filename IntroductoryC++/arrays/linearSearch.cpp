#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (element == arr[i])
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[100];
    int testCases, size, element;

    cin >> testCases;

    while (testCases > 0)
    {
        cin >> size;
        
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        cin >> element;

        int result = linearSearch(arr, size, element);
        cout << result << endl;

        testCases--;
    }
}
