// Printing name N times

#include <bits/stdc++.h>
using namespace std;

// Function declaration: prints the name n times recursively, starting from x
void printName(string name, int n, int x);

int main()
{
    string name;
    int n;

    cout << "Enter the name\n";
    getline(cin, name); // Input the name (can include spaces)
    cout << "Enter the number of times\n";
    cin >> n; // Input the number of times to print the name
    printName(name, n, 1); // Start printing from 1

    return 0; // Exit the program
}

// Recursive function to print the name n times
void printName(string name, int n, int x)
{
    if (x <= n)
    {
        cout << name << " "; // Print the name
        printName(name, n, x + 1); // Recursive call to print the next time
    }
    // Base case: if x > n, recursion stops automatically
}