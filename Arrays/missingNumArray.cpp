// 268. Missing Number
// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    // sorting the vector
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        // when array is sorted then every num should be at their corrosponding indexes
        if (i != nums[i])
        {
            return i; // returning the index number which have its corrosponding num missing
        }
    }
    // if there is no num missing in between then we will return the length of the array bcz if the size of array is 9 then the array elements should be 0 to 9 and for that we need the array size to be 9+1 = 10;
    // but array size is 9 so the last digit is missing i.e nums.size()
    return nums.size();
}

int main()
{
    vector<int> nums;
    cout << "Enter the array size\n";
    int n;
    cin >> n; // input array size
    cout << "Enter the array elements\n";
    while (n--) // loop until n = 0
    {
        int ele;
        cin >> ele;
        nums.push_back(ele); // pushing the input in the vector
    }
    // calling function
    cout << "The missing num in the array: " << missingNumber(nums) << endl;

    return 0;
}