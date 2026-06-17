// Optimal Approach
#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool check_isValid(string s)
{
    stack<char> st;
    for (char ch : s)
    {
        if (ch == '(' || ch == '{' || ch == '[') st.push(ch);
        else
        {
            if (st.empty()) return false;
            if (ch == ')' && st.top() != '(') return false;
            if (ch == '}' && st.top() != '{') return false;
            if (ch == ']' && st.top() != '[') return false;
            st.pop();
        }
    }
    return st.empty();
}
int main()
{
    string s;
    cout << "Enter Parentheses String: ";
    cin >> s;
    if (check_isValid(s))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(n)