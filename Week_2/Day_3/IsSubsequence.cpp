// Optimal Approach
#include <iostream>
#include <string>
using namespace std;
bool isSubsequence(string s, string t)
{
    int i = 0;
    int j = 0;
    while (i < s.size() && j < t.size())
    {
        if (s[i] == t[j]) i++;
        j++;
    }
    return i == s.size();
}
int main()
{
    string s, t;
    cout << "Enter String s: ";
    cin >> s;
    cout << "Enter String t: ";
    cin >> t;
    if (isSubsequence(s, t)) cout << "True";
    else cout << "False";
    return 0;
}
// Time Complexity --> O(n + m)
// Space Complexity --> O(1)