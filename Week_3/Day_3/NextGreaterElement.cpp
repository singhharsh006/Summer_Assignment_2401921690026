// Optimal Approach
#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int, int> mp;
    stack<int> st;
    for (int i = nums2.size() - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= nums2[i]) st.pop();
        mp[nums2[i]] = st.empty() ? -1 : st.top();
        st.push(nums2[i]);
    }
    vector<int> ans;
    for (int num : nums1) ans.push_back(mp[num]);
    return ans;
}
int main()
{
    int n1, n2;
    cout << "Enter size of nums1: ";
    cin >> n1;
    vector<int> nums1(n1);
    cout << "Enter Elements of nums1: ";
    for (int i = 0; i < n1; i++) cin >> nums1[i];
    cout << "Enter size of nums2: ";
    cin >> n2;
    vector<int> nums2(n2);
    cout << "Enter Elements of nums2: ";
    for (int i = 0; i < n2; i++) cin >> nums2[i];
    vector<int> result = nextGreaterElement(nums1, nums2);
    cout << "Next Greater Elements: ";
    for (int num : result) cout << num << " ";
    return 0;
}
// Time Complexity --> O(n + m)
// Space Complexity --> O(m)