#include <bits/stdc++.h>
using namespace std;

void nStarTriangle(int n)
{
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the half side length of Triangle\n";
    cin >> n;
    cout << "The derised Pattern\n";
    nStarTriangle(n);
    return 0;
}