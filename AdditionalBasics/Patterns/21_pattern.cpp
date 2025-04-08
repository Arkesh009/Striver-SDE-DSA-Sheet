#include<bits/stdc++.h>
using namespace std;

void getStarPattern(int n) {
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || i==n){
                cout << "*";
            }else{
                if(j==1 || j==n){
                    cout << "*";
                }else{
                    cout << " ";
                }
            }
        }
        cout << "\n";
    }
}


int main()
{
    int n;
    cout << "Enter the side length of the Star Pattern\n";
    cin >> n;
    cout << "The derised Pattern\n";
    getStarPattern(n);
   return 0;
}