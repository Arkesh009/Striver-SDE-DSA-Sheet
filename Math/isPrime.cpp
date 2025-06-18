// check for prime numbers

#include <bits/stdc++.h>
using namespace std;

// Function declaration: checks if x is a prime number
bool isPrime(int x);

int main()
{
    int x;
    cin >> x; // Input the number to check

    // if function returns true
    if (isPrime(x))
    {
        cout << x << " is a Prime number\n";
    }
    else // if returned value is false
    {
        cout << x << " is not a Prime number\n";
    }

    return 0; // Exit the program
}

// Function to check if a number is prime
bool isPrime(int x)
{
    // if the input is 0 or 1, not prime
    if (x == 0 || x == 1)
    {
        return 0;
    }
    // Check divisibility from 2 up to sqrt(x)
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0) // If divisible, not prime
        {
            return 0;
        }
    }
    return 1; // If no divisors found, x is prime
}