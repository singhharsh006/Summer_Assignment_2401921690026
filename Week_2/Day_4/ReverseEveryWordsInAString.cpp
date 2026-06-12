// Optimal Approach
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string reverse_Words(string s)
{
    int start = 0;
    for (int end = 0; end <= s.size(); end++)
    {
        if (end == s.size() || s[end] == ' ')
        {
            reverse(s.begin() + start, s.begin() + end);
            start = end + 1;
        }
    }
    return s;
}
int main()
{
    string s;
    cout << "Enter the String: ";
    getline(cin, s);
    cout << "Result: " << reverse_Words(s);
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(1)