// Optimal Approach
#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool isAnagram(string s, string t)
{
    if (s.size() != t.size()) return false;
    vector<int> freq(26, 0);
    for (char ch : s)
    {
        freq[ch - 'a']++;
    }
    for (char ch : t)
    {
        freq[ch - 'a']--;
    }
    for (int count : freq)
    {
        if (count != 0) return false;
    }
    return true;
}
int main()
{
    string s, t;
    cout << "Enter first String: ";
    cin >> s;
    cout << "Enter second String: ";
    cin >> t;
    if (isAnagram(s, t)) cout << "Anagram!";
    else cout << "Not an Anagram!";
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(1)