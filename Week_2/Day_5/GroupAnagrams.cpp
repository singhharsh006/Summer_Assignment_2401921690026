// Optimal Approach
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
vector<vector<string>> group_Anagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> mp;
    for (string str : strs)
    {
        string key = str;
        sort(key.begin(), key.end());
        mp[key].push_back(str);
    }
    vector<vector<string>> ans;
    for (auto &it : mp) ans.push_back(it.second);
    return ans;
}
int main()
{
    int n;
    cout << "Enter number of Strings: ";
    cin >> n;
    vector<string> strs(n);
    cout << "Enter the Strings:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> strs[i];
    }
    vector<vector<string>> result = group_Anagrams(strs);
    cout << "Grouped Anagrams:\n";
    for (auto &group : result)
    {
        for (string str : group)
        {
            cout << str << " ";
        }
        cout << endl;
    }
    return 0;
}
// Time Complexity --> O(n * k log k)
// Space Complexity --> O(n * k)