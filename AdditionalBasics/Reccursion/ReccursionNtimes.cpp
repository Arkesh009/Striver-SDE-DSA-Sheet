// Understanding Basic recursion by printing N times

#include <bits/stdc++.h>
using namespace std;

// Function declaration: prints character 'a' x times recursively
void nPrints(int, char);

int main()
{
    char a;
    int x;
    cout << "Enter the char you wanna print\n";
    cin >> a; // Input the character to print
    cout << "Enter the number of times you wanna print it\n";
    cin >> x; // Input the number of times to print the character
    nPrints(x, a); // Call the recursive function

    return 0; // Exit the program
}

// Recursive function to print character 'a' x times
void nPrints(int x, char a)
{
    if (x == 0)
    {
        return; // Base case: stop recursion when x reaches 0
    }
    cout << a << " "; // Print the character
    nPrints(x - 1, a); // Recursive call with decremented x
}