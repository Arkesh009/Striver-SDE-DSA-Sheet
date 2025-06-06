// Check if the given string is a Palindrome using recursive technique

#include <bits/stdc++.h>
using namespace std;

// Function declaration: checks if string s is a palindrome starting from index i
bool isPalindrome(string s, int);

int main()
{
    string s;
    cout << "Enter the string\n";
    getline(cin, s); // Input the string (can include spaces)

    // Call the recursive palindrome function and print the result
    if (isPalindrome(s, 0))
    {
        cout << "It is a Palindrome\n";
    }
    else
    {
        cout << "Not a Palindrome\n";
    }

    return 0; // Exit the program
}

// Recursive function to check if a string is a palindrome
bool isPalindrome(string s, int i)
{
    // Base case: If we've checked up to the middle, it's a palindrome
    if (i >= s.length() / 2)
    {
        return true;
    }

    // If characters at current positions don't match, it's not a palindrome
    if (s[i] != s[s.length() - i - 1])
    {
        return false;
    }

    // Recursive call: check next pair of characters
    return isPalindrome(s, i + 1);
}