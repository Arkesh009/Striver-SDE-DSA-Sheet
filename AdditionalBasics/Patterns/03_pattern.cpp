#include<bits/stdc++.h>
using namespace std;

void nTriangle(int n) {
	// Write your code here
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout << j << " ";
		}
		cout << "\n";
	}
}

int main()
{
    int n;
    cout << "Enter the side length of matrix\n";
    cin >> n;
    cout << "The derised Pattern\n";
    nTriangle(n);
   
   return 0;
}