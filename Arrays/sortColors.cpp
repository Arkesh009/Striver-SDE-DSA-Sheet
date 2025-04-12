// 75. Sort Colors

#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    //sort(nums.begin(), nums.end());
    int j=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==0){
            swap(nums[i], nums[j]);
            j++;
        }
    }

    for(int i=j; i<nums.size(); i++){
        if(nums[i]==1){
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