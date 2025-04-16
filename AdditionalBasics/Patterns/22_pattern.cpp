#include <bits/stdc++.h>
using namespace std;

void getNumberPattern(int n)
{
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << n - min({i, j, size - 1 - i, size - 1 - j});
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The derised Pattern\n";
    getNumberPattern(n);
    return 0;
}