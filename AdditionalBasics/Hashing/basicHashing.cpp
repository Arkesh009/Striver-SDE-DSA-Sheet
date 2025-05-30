#include <bits/stdc++.h> // Include all standard libraries
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array\n";
    cin >> n; // Input the size of the array

    int arr[n];
    cout << "Enter the elements in the array\n";
    // Input the elements of the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Hashing
    int hash[20] = {0}; // Initialize a hash array of size 20 with all elements set to 0
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1; // Increment the count of the element in the hash array
    }

    // Handling queries
    int q;
    cout << "Enter the number of queries\n";
    cin >> q; // Input the number of queries
    while (q--)
    {
        int number;
        cout << "Enter the num\n";
        cin >> number; // Input the number to query
        // Fetching:
        cout << hash[number] << endl; // Output the frequency of the queried number
    }

    return 0; // Exit the program
}