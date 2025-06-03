// Given an array of size N. Find the highest and lowest frequency element.

#include <bits/stdc++.h>
using namespace std;

// Function declaration to count frequencies and find highest/lowest frequency elements
void countFreq(int[], int);

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    countFreq(arr, n); // Call the function to process the array
    return 0;
}

void countFreq(int arr[], int n)
{
    unordered_map<int, int> mpp; // Map to store frequency of each element

    // Count the frequency of each element in the array
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++; // Increment the count for arr[i]
    }

    int mxFreq = 0, minFreq = n; // Initialize max and min frequency
    int mxNum = 0, minNum = 0;   // Initialize numbers with max and min frequency

    // Iterate through the map to find the elements with highest and lowest frequency
    for (auto i : mpp)
    {
        int freq = i.second; // Frequency of the current element
        int num = i.first;   // The element itself

        // Update max frequency and corresponding number if a higher frequency is found
        if (mxFreq < freq)
        {
            mxFreq = freq;
            mxNum = num;
        }

        // Update min frequency and corresponding number if a lower frequency is found
        if (minFreq > freq)
        {
            minFreq = freq;
            minNum = num;
        }
    }
    // Output the results
    cout << "Num with Highest frequency: " << mxNum << '\n';
    cout << "Num wiht Least frequency: " << minNum << '\n';
}