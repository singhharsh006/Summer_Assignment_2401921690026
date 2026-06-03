// Optimal Approach
// Sliding Window
#include <iostream>
#include <vector>
using namespace std;
double findMaxAverage(vector<int> &nums, int k)
{
    int left = 0;
    int sum = 0;
    int maxSum = INT_MIN;
    for (int right = 0; right < nums.size(); right++)
    {
        sum += nums[right];
        if (right - left + 1 == k)
        {
            maxSum = max(maxSum, sum);
            sum -= nums[left];
            left++;
        }
    }
    return (double)maxSum / k;
}
int main()
{
    int n, k;
    cout << "Enter the size of Array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;
    double maxAverage = findMaxAverage(nums, k);
    cout << "Maximum Average Subarray: " << maxAverage << endl;
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(1)