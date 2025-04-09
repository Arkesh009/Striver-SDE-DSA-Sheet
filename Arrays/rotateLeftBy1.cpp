// Left rotate an array by one place

#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>& arr, int n) {
    // ex: arr[] = {1,2,3,4,5}
    reverse(arr.begin(), arr.end()); // {5,4,3,2,1}
    reverse(arr.begin(), arr.end()-1); // {2,3,4,5,1}

    return arr;
}

int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;
   vector<int> arr(n);
   cout << "Enter the elements of the array\n";
   for(int i=0; i<n; i++){
        int ele;
        cin >> ele;
        arr[i] = ele;
   }
   rotateArray(arr, n);

   cout << "The rotated array is:\n{";
   for(auto i: arr){
        cout << i << ",";
   }
   cout << "}";

   return 0;
}