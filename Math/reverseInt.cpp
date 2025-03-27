// 7. Reverse Integer

#include<bits/stdc++.h>
using namespace std;

int reverse(int x);

int main()
{
   int x;
   cin >> x;
   cout << reverse(x);
   
   return 0;
}

int reverse(int x){
    long long int temp = 0;
    while(x){
        int last = x%10;
        temp = temp*10 + last;
        x /= 10;
    }

    if(temp>INT_MAX || temp< INT_MIN){
        return 0;
    }

    return temp;
}