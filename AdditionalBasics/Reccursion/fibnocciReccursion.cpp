// Fibnocci series

#include <bits/stdc++.h>
using namespace std;

// Recursive function to calculate the nth Fibonacci number
int fib(int n)
{
    // Base case: if n is 0 or 1, return n
    if (n <= 1)
    {
        return n;
    }
    // Recursive case: fib(n) = fib(n-1) + fib(n-2)
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n; // Input the number of terms to print in the Fibonacci series

    // Print the Fibonacci series up to the nth term
    for (int i = 1; i <= n; i++)
    {
        cout << fib(i) << " "; // Print the ith Fibonacci number
    }

    return 0; // Exit the program
}