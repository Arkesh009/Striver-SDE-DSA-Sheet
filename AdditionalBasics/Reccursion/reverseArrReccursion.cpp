// Reverse an array using Recursion

#include <bits/stdc++.h>
using namespace std;

// Function declaration: reverses the array from index i to j recursively
void revArr(int[], int, int);

int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n; // Input the size of the array
    int arr[n];
    cout << "Enter the elements in the array\n";

    // Input the elements of the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Call the recursive function to reverse the array
    revArr(arr, 0, n - 1);

    // Print the reversed array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0; // Exit the program
}

// Recursive function to reverse the array from index i to j
void revArr(int a[], int i, int j)
{
    if (i < j)
    {
        swap(a[i], a[j]);         // Swap the elements at positions i and j
        revArr(a, i + 1, j - 1);  // Recursive call to reverse the remaining subarray
    }
    // Base case: when i >= j, recursion stops automatically
}