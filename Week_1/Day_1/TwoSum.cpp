// Optimal Approach
#include <iostream>
#include <vector>
#include <map>
using namespace std;
vector<int> twoSum(vector<int> &arr, int k)
{
    map<int, int> mpp; // Unordered map can be used to decrease the Time Complexity
    for (int i = 0; i < arr.size(); i++)
    {
        int rem = k - arr[i];
        if (mpp.find(rem) != mpp.end())
        {
            return {mpp[rem], i}; // return "Yes!"
        }
        mpp[arr[i]] = i;
    }
    return {-1, -1}; // return "No!";
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
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    vector<int> result = twoSum(arr, k);
    for (auto it : result)
    {
        cout << it << " ";
    }
    return 0;
}
// Time Complexity --> O(nlog(n))
// Space Complexity --> O(n)