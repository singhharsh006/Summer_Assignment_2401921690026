// Optimal Approach
// Using Hash Set
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
bool containsDuplicate(vector<int> &arr)
{
    unordered_set<int> st;
    for (int i = 0; i < arr.size(); i++)
    {
        if (st.find(arr[i]) != st.end())
        {
            return true;
        }
        st.insert(arr[i]);
    }
    return false;
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the Elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (containsDuplicate(arr))
    {
        cout << "Array contains duplicate elements!" << endl;
    }
    else
    {
        cout << "Array does not contain duplicate elements!" << endl;
    }
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(n)