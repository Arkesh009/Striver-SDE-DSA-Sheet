#include<bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int>& nums) {
    for(int i=0; i<nums.size()-1; i++){
        int min = i;
        for(int j=i; j<nums.size(); j++){
            if(nums[min] > nums[j]){
                min = j;
            }
        }
        swap(nums[i], nums[min]);
    }
    return nums;
}

int main()
{
   cout << "Enter the size of the array\n";
   int n;
   cin >> n;

   cout << "Enter the elements in the array\n";
   vector<int> nums;
   for(int i=0; i<n; i++){
        int ele;
        cin >> ele;
        nums.push_back(ele);
   }

   selectionSort(nums);
   
   cout << "The sorted array = ";
   for(auto i: nums){
        cout << i << " ";
   }

   return 0;
}