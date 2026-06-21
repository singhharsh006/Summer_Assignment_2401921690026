// Optimal Approach
#include <iostream>
#include <vector>
#include <deque>
using namespace std;
vector<int> max_SlidingWindow(vector<int> &nums, int k)
{
    deque<int> dq;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        while (!dq.empty() && dq.front() <= i - k) dq.pop_front();
        while (!dq.empty() && nums[dq.back()] < nums[i]) dq.pop_back();
        dq.push_back(i);
        if (i >= k - 1) ans.push_back(nums[dq.front()]);
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter size of Array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int k;
    cout << "Enter Window Size: ";
    cin >> k;
    vector<int> result = max_SlidingWindow(nums, k);
    cout << "Maximum in each Window: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(k)