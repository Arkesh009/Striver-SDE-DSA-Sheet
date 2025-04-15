#include <bits/stdc++.h>
using namespace std;

void nLetterTriangle(int n)
{

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = n; j >= i; j--)
        {
            cout << ch << " ";
            ch++;
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the length of Letter Triangle\n";
    cin >> n;
    cout << "The derised Pattern\n";
    nLetterTriangle(n);
    return 0;
}