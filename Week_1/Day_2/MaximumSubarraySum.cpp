// Optimal Approach
// Kadane's Algorithm
#include <iostream>
#include <vector>
using namespace std;
int maxSubarraySum(vector<int> &arr)
{
    int sum = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum > maxi)
        {
            maxi = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}
int main()
{
    int n;
    cout << "Enter the value of of n: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the Elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxSum = maxSubarraySum(arr);
    cout << "Maximum Subarray Sum of the Array is: " << maxSum << endl;
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(1)