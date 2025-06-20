// 7. Reverse Integer

#include <bits/stdc++.h>
using namespace std;

// Function declaration: reverses the digits of an integer x
int reverse(int x);

// Method 1: Arithmetic approach
int main()
{
    int x;
    cin >> x; // Input the integer to reverse
    cout << reverse(x); // Output the reversed integer

    return 0; // Exit the program
}

int reverse(int x)
{
    long long int temp = 0; // Use long long to handle overflow during reversal

    // Reverse the digits of x
    while (x)
    {
        int last = x % 10;           // Get the last digit
        temp = temp * 10 + last;     // Append last digit to temp
        x /= 10;                     // Remove the last digit
    }

    // If the reversed number is out of 32-bit integer range, return 0
    if (temp > INT_MAX || temp < INT_MIN)
    {
        return 0;
    }

    return temp; // Return the reversed integer

    // Method 2 (commented out): Using stringstream and string reversal
    // stringstream ss, ss2;
    // ss << x;
    // string s = ss.str();
    // reverse(s.begin(), s.end());
    // ss2 << s;
    // long long int a;
    // ss2 >> a;
    // if(a > INT_MAX || a < INT_MIN){
    //     return 0;
    // }
    // return a;
}