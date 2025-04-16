#include <bits/stdc++.h>
using namespace std;

void symmetry(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        for (int j = 2 * (n - i); j > 0; j--)
        {
            cout << "  ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the length of Symmetry\n";
    cin >> n;
    cout << "The derised Pattern\n";
    symmetry(n);
    return 0;
}