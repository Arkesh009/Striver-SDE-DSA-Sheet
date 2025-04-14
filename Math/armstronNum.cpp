#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n)
{
    if (n < 0)
    {
        return false;
    }

    int temp = n;
    int sum = 0;
    int digits = 0;
    while (temp)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp)
    {
        int last = temp % 10;
        sum += pow(last, digits);
        temp /= 10;
    }

    return sum == n;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n))
    {
        cout << n << " is an Armstrong number." << endl;
    }
    else
    {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}