#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int ind1 = 0;
    int ind2 = 1;
    if(nums.size()<=1){
        return;
    }
    for(int i=0; i<nums.size(); i++){
        if(nums[ind1] == 0 && nums[ind2] != 0){
            swap(nums[ind1], nums[ind2]);
            ind1++;
            ind2++;
        }else if(nums[ind1]==0 && nums[ind2]==0){
            ind2++;
        }else if(nums[ind1]!=0 && nums[ind2]==0){
            ind1++;
            ind2++;
        }else{
            ind1++;
            ind2++;
        }
        if(ind2 == nums.size()){
            break;
        }
    }
}

int main()
{
   cout << "Enter the size of array\n";
   int n;
   cin >> n;
   cout << "Enter the elements of the array\n";
   vector<int> nums;
   for(int i=0; i<n; i++){
        int ele;
        cin >> ele;
        nums.push_back(ele);
   }

   cout << "The array after moving all zeros to the end:\n";
   moveZeroes(nums);

   cout << "{";
   for(auto i: nums){
        cout << i << ",";
   }
   cout << "\b}";
   return 0;
}