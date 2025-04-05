#include<bits/stdc++.h>
using namespace std;

void nNumberTriangle(int n) {
    
    for(int i=n; i>0; i--){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the side length of the triangle\n";
    cin >> n;
    cout << "The derised Pattern\n";
    nNumberTriangle(n);
   return 0;
}