// Left rotate an array by one place

#include <bits/stdc++.h>
using namespace std;

// Function to rotate the array to the left by one position
vector<int> rotateArray(vector<int> &arr, int n)
{
     // Example: arr[] = {1,2,3,4,5}
     reverse(arr.begin(), arr.end());     // Reverse the whole array: {5,4,3,2,1}
     reverse(arr.begin(), arr.end() - 1); // Reverse first n-1 elements: {2,3,4,5,1}
     // Now the array is left rotated by one position

     return arr; // Return the rotated array
}

int main()
{
     int n;
     cout << "Enter the size of the array\n";
     cin >> n; // Input the size of the array
     vector<int> arr(n);
     cout << "Enter the elements of the array\n";
     // Input the elements of the array
     for (int i = 0; i < n; i++)
     {
          int ele;
          cin >> ele;
          arr[i] = ele;
     }
     rotateArray(arr, n); // Call the function to rotate the array

     cout << "The rotated array is:\n{";
     // Print the rotated array in curly braces, separated by commas
     for (auto i : arr)
     {
          cout << i << ",";
     }
     cout << "}";

     return 0; // Exit the program
}