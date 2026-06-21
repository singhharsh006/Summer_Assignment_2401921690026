// Optimal Approach
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int largest_RectangleArea(vector<int> &heights)
{
    stack<int> st;
    int maxArea = 0;
    int n = heights.size();
    for (int i = 0; i <= n; i++)
    {
        while (!st.empty() && (i == n || heights[st.top()] >= heights[i]))
        {
            int height = heights[st.top()];
            st.pop();
            int nse = i;
            int pse = st.empty() ? -1 : st.top();
            int width = nse - pse - 1;
            maxArea = max(maxArea, height * width);
        }
        st.push(i);
    }
    return maxArea;
}
int main()
{
    int n;
    cout << "Enter number of Bars: ";
    cin >> n;
    vector<int> heights(n);
    cout << "Enter Heights: ";
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }
    cout << "Largest Rectangle Area: " << largest_RectangleArea(heights);
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(n)