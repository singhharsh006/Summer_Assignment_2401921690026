// Optimal Approach
#include <iostream>
#include <stack>
using namespace std;
class MinStack
{
public:
    stack<int> st;
    stack<int> minSt;
    void push(int val)
    {
        st.push(val);
        if (minSt.empty()) minSt.push(val);
        else minSt.push(min(val, minSt.top()));
    }
    void pop()
    {
        st.pop();
        minSt.pop();
    }
    int top()
    {
        return st.top();
    }
    int getMin()
    {
        return minSt.top();
    }
};
int main()
{
    MinStack ms;
    ms.push(-2);
    ms.push(0);
    ms.push(-3);
    cout << "Minimum Element: " << ms.getMin() << endl;
    ms.pop();
    cout << "Top Element: " << ms.top() << endl;
    cout << "Minimum Element: " << ms.getMin() << endl;
    return 0;
}
// Time Complexity --> O(1)
// Space Complexity --> O(n)