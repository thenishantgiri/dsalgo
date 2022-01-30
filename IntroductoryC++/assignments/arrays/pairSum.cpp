#include <iostream>
using namespace std;

int pairSum(int arr[], int size, int sum)
{
    int pairCount = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                pairCount++;
            }
        }
    }

    return pairCount;
}

int main()
{
    int arr[100];
    int testCases, size, sum;

    cin >> testCases;
    while (testCases > 0)
    {
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        cin >> sum;

        int pairCount = pairSum(arr, size, sum);
        cout << pairCount << endl;

        testCases--;
    }
}