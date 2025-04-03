// Hashing with map

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array\n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // hashing
    map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    // Handling querry
    int q;
    cout << "Enter the number of querries\n";
    cin >> q;
    while (q--)
    {
        int number;
        cout << "Enter the num\n";
        cin >> number;
        // fetching:
        cout << hash[number] << endl;
    }

    return 0;
}