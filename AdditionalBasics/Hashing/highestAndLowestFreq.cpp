// Given an array of size N. Find the highest and lowest frequency element.

#include <bits/stdc++.h>
using namespace std;

void countFreq(int[], int);

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}

void countFreq(int arr[], int n)
{
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++; // inserting the array elements as key and frequency
    }

    int mxFreq = 0, minFreq = n;
    int mxNum = 0, minNum = 0;

    for (auto i : mpp)
    {
        int freq = i.second; // key
        int num = i.first;   // frequency

        if (mxFreq < freq) // if the frequency of the index element is greater then setting it as the maximum frequent num
        {
            mxFreq = freq;
            mxNum = num;
        }

        if (minFreq > freq) // if the frequency of the index element is lesser then setting it as the minimum frequent num
        {
            minFreq = freq;
            minNum = num;
        }
    }
    // output
    cout << "Num with Highest frequency: " << mxNum << '\n';
    cout << "Num wiht Least frequency: " << minNum << '\n';
}