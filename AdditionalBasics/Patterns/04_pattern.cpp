#include<bits/stdc++.h>
using namespace std;

void triangle(int n) {
	// Write your code here
	for(int i=1; i<=n; i++){
		for(int j=0; j<i; j++){
			cout << i << " ";
		}
		cout << "\n";
	}
}

int main()
{
    int n;
    cout << "Enter the length of a side of the Triangle\n";
    cin >> n;
    cout << "The derised Pattern\n";
    triangle(n);
    return 0;
}