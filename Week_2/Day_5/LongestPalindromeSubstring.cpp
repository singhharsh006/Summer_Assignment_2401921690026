// Optimal Approach
#include <iostream>
#include <string>
using namespace std;
string longest_Palindrome(string s)
{
    int start = 0;
    int maxLen = 1;
    for (int i = 0; i < s.size(); i++)
    {
        // Odd Length Palindrome
        int l = i;
        int r = i;
        while (l >= 0 && r < s.size() && s[l] == s[r])
        {
            if (r - l + 1 > maxLen)
            {
                maxLen = r - l + 1;
                start = l;
            }
            l--;
            r++;
        }
        // Even Length Palindrome
        l = i;
        r = i + 1;
        while (l >= 0 && r < s.size() && s[l] == s[r])
        {
            if (r - l + 1 > maxLen)
            {
                maxLen = r - l + 1;
                start = l;
            }
            l--;
            r++;
        }
    }
    return s.substr(start, maxLen);
}
int main()
{
    string s;
    cout << "Enter the String: ";
    cin >> s;
    cout << "Longest Palindromic Substring: " << longest_Palindrome(s);
    return 0;
}
// Time Complexity --> O(n^2)
// Space Complexity --> O(1)