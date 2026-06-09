// Optimal Approach
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int firstUniqueChar(string s)
{
    vector<int> freq(26, 0);
    for (char ch : s)
    {
        freq[ch - 'a']++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (freq[s[i] - 'a'] == 1) return i;
    }
    return -1;
}
int main()
{
    string s;
    cout << "Enter a String: ";
    cin >> s;
    int index = firstUniqueChar(s);
    if (index == -1)
    {
        cout << "No Unique Character Found!";
    }
    else
    {
        cout << "First Unique Character Index: " << index;
    }
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(1)