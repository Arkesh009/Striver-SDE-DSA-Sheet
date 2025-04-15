#include <bits/stdc++.h>
using namespace std;

void alphaTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + n - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch--;
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the length of Alpha Triangle\n";
    cin >> n;
    cout << "The derised Pattern\n";
    alphaTriangle(n);
    return 0;
}