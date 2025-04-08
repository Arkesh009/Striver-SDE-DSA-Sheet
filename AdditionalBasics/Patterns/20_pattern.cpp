#include<bits/stdc++.h>
using namespace std;

void symmetry(int n) {
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        for(int j=1; j<=2*(n-i); j++){
            cout << "  ";
        }
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << "\n";
    }

    for(int i=0; i<n-1; i++){
        for(int j=i; j<n-1; j++){
            cout << "* ";
        }
        for(int j=1; j<=2*i; j++){
            cout << "  ";
        }
        for(int j=i; j<n-1; j++){
            cout << "* ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the length of Symmetry\n";
    cin >> n;
    cout << "The derised Pattern\n";
    symmetry(n);
   return 0;
}