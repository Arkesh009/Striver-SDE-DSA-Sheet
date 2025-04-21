// 169. Maority Element( >n/2)

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int size = nums.size(); // calculate the size of vector
    unordered_map<int, int>
        hsh; // declaration of a hash map
             // Using an unordered_map<int, int> (hsh) to count the
             // occurrences of each integer in the vector.
    for (int i : nums)
    {
        hsh[i]++; // for each int in nums incrementing its count in hash map
    }

    int max = 0;
    for (auto i : hsh)
    {
        // check if the count of the ith key is > size/2
        if (i.second > size / 2)
        {
            max = i.first; // updating the max
            break;
        }
    }
    // returning the key with maximum occurance
    return max;
}

int main()
{
    int n;
    cout << "Enter the size of the vector\n";
    // Array size
    cin >> n;
    cout << "Enter the elements of the vector\n";
    vector<int> nums;
    // Elements input
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }

    cout << "The maority element: ";
    cout << majorityElement(nums); // function call

    return 0;
}