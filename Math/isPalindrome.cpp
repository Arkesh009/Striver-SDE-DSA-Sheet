// 9. Given an integer x, return true if x is a palindrome, and false otherwise

#include <bits/stdc++.h>
using namespace std;

// Function to check if an integer is a palindrome
bool isPalindrome(int x)
{
    // Negative numbers and numbers ending with 0 (except 0 itself) are not palindromes
    if (x < 0 || (x % 10 == 0 && x != 0))
    {
        return false;
    }

    int reverse = 0;
    int temp = x; // Store the original value of x

    // Reverse the digits of x
    while (x)
    {
        int last = x % 10;                // Get the last digit
        reverse = reverse * 10 + last;    // Build the reversed number
        x /= 10;                          // Remove the last digit
    }

    // If the reversed number is equal to the original, it's a palindrome
    return temp == reverse;
}

int main()
{
    int x;
    cin >> x; // Input the integer to check

    if (isPalindrome(x))
    {
        cout << "The integer is a Palindrome\n";
    }
    else
    {
        cout << "Its not\n";
    }

    return 0; // Exit the program
}