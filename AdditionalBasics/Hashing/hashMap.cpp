// Hashing with map

#include <bits/stdc++.h>
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
    map<int, int> hash; // Declare a map to store frequency of each element
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++; // Increment the count for each element in the map
    }

    // Handling queries
    int q;
    cout << "Enter the number of querries\n";
    cin >> q; // Input the number of queries
    while (q--)
    {
        int number;
        cout << "Enter the num\n";
        cin >> number; // Input the number to query
        // Fetch and print the frequency of the queried number
        cout << hash[number] << endl;
    }

    return 0; // Exit the program
}