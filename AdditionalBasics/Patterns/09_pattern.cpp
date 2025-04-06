#include<bits/stdc++.h>
using namespace std;

void nStarDiamond(int n) {
    for(int i=0; i<n; i++){
        for(int j=i; j<(2*n-1)/2; j++){
            cout << " ";
        }
        for(int k=0; k<=i+i; k++){
            cout << "*";
        }
        cout << "\n";
    }

    for(int i=n-1; i>=0; i--){
        for(int j=i; j<(2*n-1)/2; j++){
            cout << " ";
        }
        for(int k=0; k<=i+i; k++){
            cout << "*";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the half side length of Diamond\n";
    cin >> n;
    cout << "The derised Pattern\n";
    nStarDiamond(n);
   return 0;
}