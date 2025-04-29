#include <bits/stdc++.h>
using namespace std;

// Function to perform Bubble Sort
vector<int> bubbleSort(vector<int> &nums)
{
    // Extracting the size of the array
    int size = nums.size();

    // Variable to track if any swaps were made in the current pass
    int didSwap = 0;

    // Outer loop: Iterate from the last index to the first
    for (int i = size - 1; i >= 1; i--)
    {
        // Inner loop: Compare adjacent elements up to the current boundary (i)
        for (int j = 0; j < i; j++)
        {
            // If the current element is greater than the next, swap them
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                // Mark that a swap was made
                didSwap = 1;
            }
        }
        // If no swaps were made in the current pass, the array is already sorted
        if (didSwap == 0)
        {
            break;
        }
    }
    // Return the sorted array
    return nums;
}

int main()
{
    cout << "Enter the size of the array\n";
    int n;
    // Input the size of the array
    cin >> n;

    cout << "Enter the elements in the array\n";
    vector<int> nums;
    // Input the elements of the array
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }

    // Call the Bubble Sort function
    bubbleSort(nums);

    cout << "The sorted array = ";
    // Print the sorted array
    for (auto i : nums)
    {
        cout << i << " ";
    }

    return 0;
}