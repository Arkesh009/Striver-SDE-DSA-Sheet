#include <bits/stdc++.h>
using namespace std;

void nBinaryTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the length of B-Triangle\n";
    cin >> n;
    cout << "The derised Pattern\n";
    nBinaryTriangle(n);
    return 0;
}