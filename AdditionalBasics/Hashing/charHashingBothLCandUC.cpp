// Character hashing if the string contains both upper and lowercase

#include <bits/stdc++.h>
using namespace std;

int main()
{
     string s;
     cout << "Enter the string\n";
     getline(cin, s); // Input the string (can include spaces)

     // Precompute: Initialize a hash array to store frequency of each character (ASCII 0-255)
     int hash[256] = {0};
     for (int i = 0; i < s.size(); i++)
     {
          hash[s[i]]++; // Increment the count for the ASCII value of the character
     }

     // Queries
     int q;
     cout << "Enter the number of queries\n";
     cin >> q; // Input the number of queries
     while (q--)
     {
          char c;
          cin >> c; // Input the character to query
          // Fetch and print the frequency of the queried character
          cout << hash[c] << endl;
     }

     return 0; // Exit the program
}