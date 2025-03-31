// Understanding Basic reccursion by printing N times

#include <bits/stdc++.h>
using namespace std;

void nPrints(int, char);

int main()
{
    char a;
    int x;
    cout << "Enter the char you wanna print\n";
    cin >> a;
    cout << "Enter the number of times you wanna print it\n";
    cin >> x;
    nPrints(x, a);

    return 0;
}

void nPrints(int x, char a)
{
    if (x == 0)
    {
        return;
    }
    cout << a << " ";
    nPrints(x - 1, a); // calls the same function with (prev value - 1)
}