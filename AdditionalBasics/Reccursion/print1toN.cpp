// Print 1 to N numbers

#include <bits/stdc++.h>
using namespace std;

// Function declaration: prints numbers from x to n recursively
void printN(int, int);

int main()
{
    int n;
    cout << "Enter the count\n";
    cin >> n; // Input the value of n
    printN(n, 1); // Start printing from 1 to n

    return 0; // Exit the program
}

// Recursive function to print numbers from x to n
void printN(int n, int x)
{
    if (x <= n)
    {
        cout << x << " "; // Print the current number
        printN(n, x + 1); // Recursive call to print the next number
    }
    // Base case: if x > n, recursion stops automatically
}