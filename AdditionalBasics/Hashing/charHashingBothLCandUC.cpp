// Character hassing if the string contains both upper and lowercase

#include <bits/stdc++.h>
using namespace std;

int main()
{
     string s;
     cout << "Enter the string\n";
     getline(cin, s);

     // Precompute
     int hash[256] = {0};
     for (int i = 0; i < s.size(); i++)
     {
          hash[s[i]]++;
     }

     // querries
     int q;
     cout << "Enter the number of querries\n";
     cin >> q;
     while (q--)
     {
          char c;
          cin >> c;
          // fetch
          cout << hash[c] << endl;
     }

     return 0;
}