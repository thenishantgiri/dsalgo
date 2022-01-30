#include <iostream>
using namespace std;

void arrangeNumbers(int arr[], int num)
{
    bool isEven = (num % 2 == 0) ? true : false;
    int mid = num / 2;
    int res = 1;

    for (int i = 0; i < num; i++)
    {
        if (i == mid)
        {
            res = num;
        }
        else if (i == mid + 1 && !isEven)
        {
            res = num - 1;
        }

        arr[i] = res;

        if (i + 1 > mid)
        {
            res -= 2;
        }
        else if (i + 1 < mid)
        {
            res += 2;
        }
    }
}

int main()
{
    int arr[100];
    int testCases, num;

    cin >> testCases;
    while (testCases > 0)
    {
        cin >> num;
        arrangeNumbers(arr, num);

        for (int i = 0; i < num; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        testCases--;
    }
}