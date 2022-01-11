#include <iostream>
using namespace std;

int main()
{
    int basic, allow;
    float hra, da, pf;
    char grade;

    cout << "Please enter the Basic Salary (Integer) and the Grade (in uppercase only)" << endl;
    cin >> basic >> grade;

    hra = (20.0 / 100) * basic;
    da = (50.0 / 100) * basic;
    pf = (11.0 / 100) * basic;

    if (grade == 'A')
    {
        allow = 1700;
    }
    else if (grade == 'B')
    {
        allow = 1500;
    }
    else
    {
        allow = 1300;
    }

    float totalSalary = basic + (hra + da + allow - pf);

    int roundOff = totalSalary;
    if (totalSalary > roundOff)
    {
        roundOff += 1;
    }
    cout << roundOff << endl;
}