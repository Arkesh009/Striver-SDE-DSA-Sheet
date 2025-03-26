// 9. Given an integer x, return true if x is a palindrome, and false otherwise

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{

    if (x < 0 || (x % 10 == 0 && x != 0))
    {
        return false;
    }

    int reverse = 0;
    int temp = x;
    while (x)
    {
        int last = x % 10;
        reverse = reverse * 10 + last;
        x /= 10;
    }

    return temp == reverse;
}

int main()
{
    int x;
    cin >> x;

    if (isPalindrome(x))
    {
        cout << "The integer is a Palindrome\n";
    }
    else
    {
        cout << "Its not\n";
    }

    return 0;
}