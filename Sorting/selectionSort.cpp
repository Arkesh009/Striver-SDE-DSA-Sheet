#include <bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int min = i; // initially setting minimum value index to i
        for (int j = i; j < nums.size(); j++)
        {
            // checking if the jth index have lesser value
            if (nums[min] > nums[j])
            {
                min = j; // setting minimum vlaue index to j
            }
        }
        // swapping the ith index with the minimum value index
        swap(nums[i], nums[min]);
    }
    // return sorted vector
    return nums;
}

int main()
{
    cout << "Enter the size of the array\n";
    int n;
    // Array size
    cin >> n;

    cout << "Enter the elements in the array\n";
    vector<int> nums;
    // Array input
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }

    selectionSort(nums); // calling function

    cout << "The sorted array = ";
    // Printing sorted array
    for (auto i : nums)
    {
        cout << i << " ";
    }

    return 0;
}