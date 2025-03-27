// Count Digits

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;

    //    brute force approach
    // while(n){
    //     cnt++;
    //     n /= 10;
    // }
    // cout << cnt ;

    // optimal Approach

    cnt = (int)log10(n) + 1;
    cout << cnt;

    return 0;
}