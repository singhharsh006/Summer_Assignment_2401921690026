// Optimal Approach
#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool canConstruct(string ransomNote, string magazine)
{
    vector<int> freq(26, 0);
    for (char ch : magazine)
    {
        freq[ch - 'a']++;
    }
    for (char ch : ransomNote)
    {
        freq[ch - 'a']--;
        if (freq[ch - 'a'] < 0) return false;
    }
    return true;
}
int main()
{
    string ransomNote, magazine;
    cout << "Enter ransomNote String: ";
    cin >> ransomNote;
    cout << "Enter magazine String: ";
    cin >> magazine;
    if (canConstruct(ransomNote, magazine)) cout << "True";
    else cout << "False";
    return 0;
}
// Time Complexity --> O(n + m)
// Space Complexity --> O(1)