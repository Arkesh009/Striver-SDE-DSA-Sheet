// Reverse an array using Reccursion

#include <bits/stdc++.h>
using namespace std;

void revArr(int[], int, int);

int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    revArr(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

void revArr(int a[], int i, int j)
{
    if (i < j)
    {
        swap(a[i], a[j]);
        revArr(a, i + 1, j - 1);
    }
}