// Optimal Approach
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxArea(vector<int> &height)
{
    int left = 0;
    int right = height.size() - 1;
    int ans = 0;
    while (left < right)
    {
        int width = right - left;
        int mHeight = min(height[left], height[right]);
        ans = max(ans, width * mHeight);
        if (height[left] < height[right]) left++;
        else right--;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> height(n);
    cout << "Enter the elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    cout << "Maximum Water Area: " << maxArea(height);
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(1)