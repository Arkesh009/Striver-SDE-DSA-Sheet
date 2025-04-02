// Character hashing for lower case or upper case only

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string\n";
    getline(cin, s);
   
    // Pre computation
    // hashing
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]-'a']++;
    }

    // Handling querry
    int q;
    cout << "Enter the number of querries\n";
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        // fetching:
        cout << hash[c-'a'] << endl;
    }

    return 0;
}