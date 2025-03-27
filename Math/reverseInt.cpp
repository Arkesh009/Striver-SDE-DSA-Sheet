// 7. Reverse Integer

#include <bits/stdc++.h>
using namespace std;

int reverse(int x);
// Method 1
int main()
{
    int x;
    cin >> x;
    cout << reverse(x);

    return 0;
}

int reverse(int x)
{

    long long int temp = 0;
    while (x)
    {
        int last = x % 10;
        temp = temp * 10 + last;
        x /= 10;
    }

    if (temp > INT_MAX || temp < INT_MIN)
    {
        return 0;
    }

    return temp;

    // Method 2
    // stringstream ss, ss2;
    // ss << x;
    // string s = ss.str();
    // reverse(s.begin(), s.end());

    // ss2 << s;

    // long long int a;
    // ss2 >> a;

    // if(a > INT_MAX || a < INT_MIN){
    //     return 0;
    // }

    // return a;
}