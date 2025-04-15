#include <bits/stdc++.h>
using namespace std;

void alphaRamp(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the length of Alpha Ramp\n";
    cin >> n;
    cout << "The derised Pattern\n";
    alphaRamp(n);
    return 0;
}