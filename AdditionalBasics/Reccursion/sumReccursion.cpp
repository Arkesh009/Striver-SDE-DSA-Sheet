// Sum of first n number using reccursion

#include <bits/stdc++.h>
using namespace std;

void sumN(int, int);

int main()
{
    int n, sum = 0;
    cout << "Enter the value of n\n";
    cin >> n;
    sumN(n, sum);

    return 0;
}
// By reccursion
void sumN(int n, int sum)
{
    if (n < 1)
    {
        cout << sum;
        return;
    }
    sumN(n - 1, sum + n);
}
// By formula
// void sumN(int n, int sum){
//     sum = n*(n+1)/2;
//     cout << sum;
// }