#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                continue;
            }

            if (arr[i] == arr[j])
            {
                isUnique = false;
                continue;
            }
        }

        if (isUnique)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[100];
    int testCases, size;
    cin >> testCases;

    while (testCases > 0)
    {
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        int index = findUnique(arr, size);

        cout << arr[index] << endl;

        testCases--;
    }
}