#include <bits/stdc++.h>
using namespace std;

// Function to move all zeros in the array to the end while maintaining the order of non-zero elements
void moveZeroes(vector<int> &nums)
{
    int ind1 = 0; // Pointer to track the current position for possible zero
    int ind2 = 1; // Pointer to look ahead for a non-zero element

    // If the array has 0 or 1 element, nothing to do
    if (nums.size() <= 1)
    {
        return;
    }

    // Loop through the array to move zeros to the end
    for (int i = 0; i < nums.size(); i++)
    {
        // Case 1: ind1 points to zero, ind2 points to non-zero, swap them
        if (nums[ind1] == 0 && nums[ind2] != 0)
        {
            swap(nums[ind1], nums[ind2]);
            ind1++;
            ind2++;
        }
        // Case 2: both ind1 and ind2 point to zeros, move ind2 ahead
        else if (nums[ind1] == 0 && nums[ind2] == 0)
        {
            ind2++;
        }
        // Case 3: ind1 points to non-zero, ind2 points to zero, move both ahead
        else if (nums[ind1] != 0 && nums[ind2] == 0)
        {
            ind1++;
            ind2++;
        }
        // Case 4: both ind1 and ind2 point to non-zeros, move both ahead
        else
        {
            ind1++;
            ind2++;
        }
        // If ind2 reaches the end, break out of the loop
        if (ind2 == nums.size())
        {
            break;
        }
    }
}

int main()
{
    cout << "Enter the size of array\n";
    int n;
    cin >> n; // Input the size of the array

    cout << "Enter the elements of the array\n";
    vector<int> nums;
    // Input the elements of the array
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }

    cout << "The array after moving all zeros to the end:\n";
    moveZeroes(nums); // Call the function to move zeros

    // Print the resulting array in curly braces, separated by commas
    cout << "{";
    for (auto i : nums)
    {
        cout << i << ",";
    }
    cout << "\b}"; // Use backspace to remove the last comma
    return 0;
}