// 268. Missing Number
// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for(int i=0; i<nums.size(); i++){
        if(i != nums[i]){
            return i;
        }
    }

    return nums.size();
}

int main()
{
    vector<int> nums;
    cout << "Enter the array size\n";
    int n;
    cin >> n;
    cout << "Enter the array elements\n";
    while(n--){
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }

    cout << "The missing num in the array: " << missingNumber(nums) << endl;
   
   return 0;
}