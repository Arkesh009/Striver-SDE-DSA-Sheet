// Maximum Consiqutive 1s

#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int cnt = 0;
    int max = 0;
    for (auto i : nums)
    {
        if (i == 0)
        {
            cnt = 0; // setting count to 0 whenever 0 is encountered
        }
        else
        {
            cnt++; // incrementing the counter whenever 1 is encountered
        }
        if (max < cnt)
        {
            max = cnt; // setting max to count with each itreation
        }
    }
    //  returning max
    return max;
}

int main()
{
    cout << "Enter the size of array\n";
    int n;
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the series 1's and 0's inside the array\n";
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        nums[i] = ele;
    }
    // Output
    cout << "The maximum number of consiqutive 1's are: " << findMaxConsecutiveOnes(nums);

    return 0;
}