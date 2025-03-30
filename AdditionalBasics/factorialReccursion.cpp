// Factorial of n terms using Reccursion

#include <bits/stdc++.h>
using namespace std;

int factN(int);

int main()
{
    int n;
    cout << "Enter the number of terms\n";
    cin >> n;
    cout << "Factorial: " << factN(n);

    return 0;
}

int factN(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * factN(n - 1);
}