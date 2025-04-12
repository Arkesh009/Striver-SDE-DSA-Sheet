// 136. Single Number
// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.

#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int result = 0;
    for (auto i : nums)
    {
        result ^= i;
    }
    return result;
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

    // Call the singleNumber function
    int result = singleNumber(nums);

    // Output the result
    cout << "The single number is: " << result << endl;

    return 0;
}