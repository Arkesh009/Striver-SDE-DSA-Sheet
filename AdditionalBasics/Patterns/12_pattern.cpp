#include<bits/stdc++.h>
using namespace std;

void numberCrown(int n) {
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        for(int k=1; k<=2*(n-i); k++){
            cout << " ";
        }
        for(int j=i; j>0; j--){
            cout << j << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the length of Number Crown\n";
    cin >> n;
    cout << "The derised Pattern\n";
    numberCrown(n);
   return 0;
}