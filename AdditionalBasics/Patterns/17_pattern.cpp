#include <bits/stdc++.h>
using namespace std;

void alphaHill(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << " ";
        }
        char ch = 'A';
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << ch << " ";
            if (i > j)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the length of Alpha Hill\n";
    cin >> n;
    cout << "The derised Pattern\n";
    alphaHill(n);
    return 0;
}