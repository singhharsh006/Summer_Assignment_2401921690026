// Optimal Approach
#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;
int evaluate_RPN(vector<string> &tokens)
{
    stack<int> st;
    for (string token : tokens)
    {
        if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            if (st.size() < 2)
            {
                cout << "Invalid RPN Expression! ";
                return -1;
            }
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            if (token == "+") st.push(a + b);
            else if (token == "-") st.push(a - b);
            else if (token == "*") st.push(a * b);
            else st.push(a / b);
        }
        else st.push(stoi(token));
    }
    return st.top();
}
int main()
{
    int n;
    cout << "Enter number of Tokens: ";
    cin >> n;
    vector<string> tokens(n);
    cout << "Enter Tokens: ";
    for (int i = 0; i < n; i++)
    {
        cin >> tokens[i];
    }
    cout << "Result: " << evaluate_RPN(tokens);
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(n)