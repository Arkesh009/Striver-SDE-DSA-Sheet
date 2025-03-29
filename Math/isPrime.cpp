// check for prime numbers 

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x);

int main()
{
   int x;
   cin >> x;

   if(isPrime(x)){
        cout << x << " is a Prime number\n";
   }else{
        cout << x << " is not a Prime number\n";
   }

   return 0;
}

bool isPrime(int x){
    if(x==0 || x==1){
        return 0;
    }
    for(int i=2; i<=sqrt(x); i++){
        if(x%i == 0){
            return 0;
        }
    }
    return 1;
}