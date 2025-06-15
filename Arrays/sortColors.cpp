// 75. Sort Colors

#include <bits/stdc++.h>
using namespace std;

// Function to sort the array containing only 0s, 1s, and 2s
void sortColors(vector<int> &nums)
{
    // Dutch National Flag algorithm (two-pass version)
    int j = 0; // Pointer to place the next 0

    // First pass: move all 0s to the front
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }

    // Second pass: move all 1s after the 0s
    for (int i = j; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main()
{
    cout << "Enter the size of the array\n";
    // Input array size
    int n;
    cin >> n;

    // Input the array elements
    cout << "Enter the elements of the array\n";
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }

    // Call the sortColors function
    sortColors(nums);

    // Output the result
    cout << "Sorted colors: ";
    for (auto i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}