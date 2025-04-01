// Check if the given string is a Palindrome using reccursive technique

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int);

int main()
{
    string s;
    cout << "Enter the string\n";
    getline(cin, s);

    if (isPalindrome(s, 0))
    {
        cout << "It is a Palindrome\n";
    }
    else
    {
        cout << "Not a Palindrome\n";
    }
    isalnum(s[0]);

    return 0;
}

bool isPalindrome(string s, int i)
{

    if (i >= s.length() / 2)
    {
        return true;
    }

    if (s[i] != s[s.length() - i - 1])
    {
        return false;
    }

    return isPalindrome(s, i + 1);
}