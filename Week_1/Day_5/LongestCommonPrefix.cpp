// Optimal Approach
#include <iostream>
#include <vector>
using namespace std;
string longestCommonPrefix(vector<string> &strs)
{
    if (strs.empty()) return " ";
    for (int i = 0; i < strs[0].size(); i++)
    {
        char ch = strs[0][i];
        for (int j = 1; j < strs.size(); j++)
        {
            if (i >= strs[j].size() || strs[j][i] != ch)
            {
                return strs[0].substr(0, i);
            }
        }
    }
    return strs[0];
}
int main()
{
    int n;
    cout << "Enter the number of Strings: ";
    cin >> n;
    vector<string> strs(n);
    cout << "Enter the strings:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> strs[i];
    }
    cout << "Longest Common Prefix: " << longestCommonPrefix(strs);
    return 0;
}
// Time Complexity --> O(n * m) 
// m --> Length of the Shortest String
// Space Complexity --> O(1)