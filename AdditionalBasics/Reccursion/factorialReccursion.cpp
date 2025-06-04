// Factorial of n terms using Recursion

#include <bits/stdc++.h>
using namespace std;

// Function declaration for factorial
int factN(int);

int main()
{
    int n;
    cout << "Enter the number of terms\n";
    cin >> n; // Input the number for which factorial is to be calculated

    // Call the recursive factorial function and print the result
    cout << "Factorial: " << factN(n);
    return 0;
}

// Recursive function to calculate factorial of n
int factN(int n)
{
    // Base case: factorial of 1 is 1
    if (n == 1)
    {
        return 1;
    }
    // Recursive case: n! = n * (n-1)!
    return n * factN(n - 1);
}