// Optimal Approach
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> daily_Temp(vector<int> &temperatures)
{
    int n = temperatures.size();
    vector<int> ans(n, 0);
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && temperatures[i] > temperatures[st.top()])
        {
            int idx = st.top();
            st.pop();
            ans[idx] = i - idx;
        }
        st.push(i);
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter number of Temperatures: ";
    cin >> n;
    vector<int> temperatures(n);
    cout << "Enter Temperatures: ";
    for (int i = 0; i < n; i++)
    {
        cin >> temperatures[i];
    }
    vector<int> result = daily_Temp(temperatures);
    cout << "Answer: ";
    for (int days : result)
    {
        cout << days << " ";
    }
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(n)