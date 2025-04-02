// print N to 1 in

#include <bits/stdc++.h>
using namespace std;

void printN(int);

int main()
{
    int n;
    cout << "Enter the cout\n";
    cin >> n;
    printN(n);

    return 0;
}

void printN(int n)
{
    if (n > 0)
    {
        cout << n << " ";
    }
    printN(n - 1);
}