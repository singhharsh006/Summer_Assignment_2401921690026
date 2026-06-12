// Optimal Approach
#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> findAnagrams(string s, string p)
{
    int n = s.size();
    int m = p.size();
    vector<int> ans;
    if (m > n) return ans;
    vector<int> freqP(26, 0);
    vector<int> freqS(26, 0);
    for (int i = 0; i < m; i++)
    {
        freqP[p[i] - 'a']++;
        freqS[s[i] - 'a']++;
    }
    if (freqP == freqS) ans.push_back(0);
    for (int i = m; i < n; i++)
    {
        freqS[s[i] - 'a']++;
        freqS[s[i - m] - 'a']--;
        if (freqP == freqS) ans.push_back(i - m + 1);
    }
    return ans;
}
int main()
{
    string s, p;
    cout << "Enter String s: ";
    cin >> s;
    cout << "Enter String p: ";
    cin >> p;
    vector<int> result = findAnagrams(s, p);
    cout << "Anagram Starting Indices: ";
    for (int idx : result)
    {
        cout << idx << " ";
    }
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(1)