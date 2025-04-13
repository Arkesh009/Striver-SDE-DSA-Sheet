#include <bits/stdc++.h>
using namespace std;

void nStarTriangle(int n)
{
    for (int i = n; i >= 0; i--)
    {
        for (int k = i; k <= (2 * n - 1) / 2; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the side length of Star Triangle\n";
    cin >> n;
    cout << "The derised Pattern\n";
    nStarTriangle(n);

    return 0;
}