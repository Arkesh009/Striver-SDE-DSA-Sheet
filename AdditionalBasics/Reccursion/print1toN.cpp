// Print 1 to N numbers

#include <bits/stdc++.h>
using namespace std;

void printN(int, int);

int main()
{
    int n;
    cout << "Enter the cout\n";
    cin >> n;
    printN(n, 1);

    return 0;
}

void printN(int n, int x)
{
    if (x <= n)
    {
        cout << x << " ";
    }
    printN(n, x + 1);
}