// Character hashing for lower case or upper case only

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string\n";
    getline(cin, s); // Input the string (can include spaces)

    // Pre computation
    // Hashing: Initialize a hash array for 26 lowercase letters
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        // Increment the count for the character (assumes all are lowercase)
        hash[s[i] - 'a']++;
    }

    // Handling queries
    int q;
    cout << "Enter the number of querries\n";
    cin >> q; // Input the number of queries
    while (q--)
    {
        char c;
        cin >> c; // Input the character to query
        // Fetch and print the frequency of the queried character
        cout << hash[c - 'a'] << endl;
    }

    return 0; // Exit the program
}