#include <iostream>
using namespace std;

void arrayIntersection(int arr1[], int arr2[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
    cout << endl;
}

int main()
{
    int testCases;

    cin >> testCases;
    while (testCases > 0)
    {
        int arr1[100], arr2[100], size1, size2;

        cin >> size1;
        for (int i = 0; i < size1; i++)
        {
            cin >> arr1[i];
        }

        cin >> size2;
        for (int i = 0; i < size2; i++)
        {
            cin >> arr2[i];
        }

        arrayIntersection(arr1, arr2, size1, size2);

        testCases--;
    }
}