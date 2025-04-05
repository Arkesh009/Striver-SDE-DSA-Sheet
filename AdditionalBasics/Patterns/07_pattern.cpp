#include<bits/stdc++.h>
using namespace std;

void nStarTriangle(int n) {
    for(int i=0; i<n; i++){
        for(int j=i; j< (2*n-1)/2; j++){
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
    cout << "Enter the side length of Star Triangle\n";
    cin >> n;
    cout << "The derised Pattern\n";
    nStarTriangle(n);
   return 0;
}