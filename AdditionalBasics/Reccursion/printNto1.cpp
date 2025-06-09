// print N to 1 in

#include <bits/stdc++.h>
using namespace std;

// Function declaration: prints numbers from n down to 1 recursively
void printN(int);

int main()
{
    int n;
    cout << "Enter the count\n";
    cin >> n; // Input the value of n
    printN(n); // Start printing from n down to 1

    return 0; // Exit the program
}

// Recursive function to print numbers from n down to 1
void printN(int n)
{
    if (n > 0)
    {
        cout << n << " "; // Print the current number
        printN(n - 1);    // Recursive call to print the next number
    }
    // Base case: if n <= 0, recursion stops automatically
}