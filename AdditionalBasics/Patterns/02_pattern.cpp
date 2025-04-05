#include<bits/stdc++.h>
using namespace std;

void nForest(int n) {
	// Write your code here.
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout << "* ";
		}
		cout << "\n";
	}
}

int main()
{
    int n;
    cout << "Enter the matrix limit\n";
    cin >> n;
    cout << "The derised Pattern\n";
    nForest(n);
   return 0;
}