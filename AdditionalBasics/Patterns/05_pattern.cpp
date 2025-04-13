#include <bits/stdc++.h>
using namespace std;

void seeding(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the side length of seeding\n";
    cin >> n;
    cout << "The derised Pattern\n";
    seeding(n);

    return 0;
}