// Printing name N times

#include <bits/stdc++.h>
using namespace std;

void printName(string name, int n, int x);

int main()
{
    string name;
    int n;

    cout << "Enter the name\n";
    getline(cin, name);
    cout << "Enter the number of times\n";
    cin >> n;
    printName(name, n, 1);

    return 0;
}

void printName(string name, int n, int x)
{
    if (x <= n)
    {
        cout << name << " ";
    }
    printName(name, n, x + 1);
}