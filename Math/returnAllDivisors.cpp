// Print all the divisors up to n

#include <bits/stdc++.h>
using namespace std;

// Function to print all divisors of n
void divisors(int n)
{
    vector<int> v;
    // O(sqrt(n)) approach to find divisors
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i); // Add the divisor
            if (n / i != i)
            { // If the counterpart is different, add it as well (avoid duplicates for perfect squares)
                v.push_back(n / i);
            }
        }
    }
    sort(v.begin(), v.end()); // Sort the divisors in ascending order
    for (auto i : v)
    {
        cout << i << " "; // Print each divisor
    }
}

int main()
{
    int n;
    cin >> n; // Input the number
    divisors(n); // Call the function to print all divisors
    return 0; // Exit the program
}