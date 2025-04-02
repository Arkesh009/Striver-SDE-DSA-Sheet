// Print all the divisors upto n

#include <bits/stdc++.h>
using namespace std;
void divisors(int n)
{
    vector<int> v;
    // O(sqrt(n))
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (n / i != i)
            { // adding counter part to the vec ex: 14/1 = 14, 14/2 = 7 etc.
                v.push_back(n / i);
            }
        }
    }
    sort(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    divisors(n);
    return 0;
}