#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int ind = -1;
    int n = nums.size();

    // to find the index of breaking point
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            ind = i;
            break;
        }
    }

    // If there is no decreasing element, reverse the entire array
    if (ind == -1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }

    // to swap the ind with next greater value
    for (int i = n - 1; i > ind; i--)
    {
        if (nums[i] > nums[ind])
        {
            swap(nums[i], nums[ind]);
            break;
        }
    }

    // reversing the array after the breaking point
    reverse(nums.begin() + ind + 1, nums.end());
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};

    cout << "The next permutation is: {";

    nextPermutation(nums);
    for (auto i : nums)
    {
        cout << i << ",";
    }
    cout << "\b}";

    return 0;
}