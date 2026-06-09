// Optimal Approach
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int find_LongestSubstring(string s)
{
    vector<int> hash(256, -1);
    int n = s.size();
    int l = 0, r = 0;
    int maxLen = 0;
    while (r < n)
    {
        if (hash[s[r]] != -1)
        {
            if (hash[s[r]] >= l) l = hash[s[r]] + 1;
        }
        int len = r - l + 1;
        maxLen = max(maxLen, len);
        hash[s[r]] = r;
        r++;
    }
    return maxLen;
}
int main()
{
    string s;
    cout << "Enter a String: ";
    cin >> s;
    cout << "Length of Longest Substring Without Repeating Characters: " << find_LongestSubstring(s);
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(1)