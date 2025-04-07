#include<bits/stdc++.h>
using namespace std;

void nNumberTriangle(int n) {
    int it = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << it << " ";
            it++;
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the length of Number Triangle\n";
    cin >> n;
    cout << "The derised Pattern\n";
    nNumberTriangle(n);
   return 0;
}