#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        
    unordered_map<int, int> mp;

    for(int i=0; i<nums.size(); i++){
        if(mp.find(target-nums[i]) == mp.end()){
            mp[nums[i]] = i;
        }else{
            return {mp[target - nums[i]], i};
        }
    }

return {-1,-1};
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
       for(int i=0; i<n; i++){
            int ele;
            cin >> ele;
            nums.push_back(ele);
       }
       // Input target
       cout << "Enter the target\n";
       int target;
       cin >> target;
   
       // Call the twoSum function
       vector<int> result = twoSum(nums, target);
   
       // Output the result
       if (result[0] != -1) {
           cout << "Indices: " << result[0] << ", " << result[1] << endl;
       } else {
           cout << "No solution found." << endl;
       }

   return 0;
}