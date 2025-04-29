#include<bits/stdc++.h> // Include all standard libraries
using namespace std;

// Function to perform Insertion Sort
vector<int> insertionSort(vector<int> &nums) {
    int size = nums.size(); // Get the size of the array

    // Outer loop: Iterate through the array from the second element to the last
    for (int i = 0; i < size; i++) {
        int j = i; // Start from the current element

        // Inner loop: Compare the current element with the previous elements
        // and swap if the current element is smaller
        while (j > 0 && nums[j - 1] > nums[j]) {
            swap(nums[j - 1], nums[j]); // Swap the elements
            j--; // Move to the previous element
        }
    }

    // Return the sorted array
    return nums;
}

int main() {
    cout << "Enter the size of the array\n";
    int n;
    // Input the size of the array
    cin >> n;

    cout << "Enter the elements in the array\n";
    vector<int> nums;
    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele; // Read each element
        nums.push_back(ele); // Add the element to the vector
    }

    // Call the Insertion Sort function
    insertionSort(nums);

    cout << "The sorted array = ";
    // Print the sorted array
    for (auto i : nums) {
        cout << i << " "; // Print each element
    }

    return 0; // Exit the program
}