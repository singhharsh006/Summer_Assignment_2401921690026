// Optimal Approach
#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> ans;
void solve(int open, int close, string curr, int n)
{
    if (curr.size() == 2 * n)
    {
        ans.push_back(curr);
        return;
    }
    if (open < n) solve(open + 1, close, curr + '(', n);
    if (close < open) solve(open, close + 1, curr + ')', n);
}
vector<string> generate_Parenthesis(int n)
{
    ans.clear();
    solve(0, 0, "", n);
    return ans;
}
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    vector<string> result = generate_Parenthesis(n);
    cout << "Generated Parentheses:\n";
    for (string str : result)
    {
        cout << str << endl;
    }
    return 0;
}
// Time Complexity --> O(4^n / sqrt(n))
// Space Complexity --> O(n)