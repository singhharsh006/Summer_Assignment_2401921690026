// Optimal Approach
#include <iostream>
#include <stack>
using namespace std;
class MyQueue
{
public:
    stack<int> inStack;
    stack<int> outStack;
    void push(int x)
    {
        inStack.push(x);
    }
    int pop()
    {
        if (outStack.empty())
        {
            while (!inStack.empty())
            {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
        int val = outStack.top();
        outStack.pop();
        return val;
    }
    int peek()
    {
        if (outStack.empty())
        {
            while (!inStack.empty())
            {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
        return outStack.top();
    }
    bool empty()
    {
        return inStack.empty() && outStack.empty();
    }
};
int main()
{
    MyQueue q;
    q.push(1);
    q.push(2);
    cout << "Front Element: " << q.peek() << endl;
    cout << "Popped Element: " << q.pop() << endl;
    cout << "Is Queue Empty? " << (q.empty() ? "True" : "False");
    return 0;
}
// Time Complexity --> O(1)
// Space Complexity --> O(n)