#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int n)
{
    if (n < 0)
    {
        return false; // Negative numbers are not Armstrong numbers
    }

    int temp = n;
    int sum = 0;
    int digits = 0;

    // Count the number of digits in n
    while (temp)
    {
        digits++;
        temp /= 10;
    }

    temp = n; // Reset temp to n

    // Calculate the sum of each digit raised to the power of 'digits'
    while (temp)
    {
        int last = temp % 10; // Get the last digit
        sum += pow(last, digits); // Add last^digits to sum
        temp /= 10; // Remove the last digit
    }

    // Check if the sum equals the original number
    return sum == n;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n; // Input the number to check

    // Call the isArmstrong function and print the result
    if (isArmstrong(n))
    {
        cout << n << " is an Armstrong number." << endl;
    }
    else
    {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0; // Exit the program
}