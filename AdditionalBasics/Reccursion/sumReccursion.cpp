// Sum of first n numbers using recursion

#include <bits/stdc++.h>
using namespace std;

// Function declaration: recursively calculates the sum of first n numbers
void sumN(int, int);

int main()
{
    int n, sum = 0;
    cout << "Enter the value of n\n";
    cin >> n; // Input the value of n
    sumN(n, sum); // Call the recursive function to calculate the sum

    return 0; // Exit the program
}

// Recursive function to calculate the sum of first n numbers
void sumN(int n, int sum)
{
    if (n < 1)
    {
        cout << sum; // Base case: print the sum when n < 1
        return;
    }
    sumN(n - 1, sum + n); // Recursive call with n-1 and updated sum
}

// By formula (alternative approach, commented out)
// void sumN(int n, int sum){
//     sum = n*(n+1)/2;
//     cout << sum;
// }