// Optimal Approach
#include <iostream>
#include <string>
using namespace std;
int strStr(string haystack, string needle)
{
    int n = haystack.size();
    int m = needle.size();
    for (int i = 0; i <= n - m; i++)
    {
        int j = 0;
        while (j < m && haystack[i + j] == needle[j]) j++;
        if (j == m) return i;
    }
    return -1;
}
int main()
{
    string haystack, needle;
    cout << "Enter haystack String: ";
    cin >> haystack;
    cout << "Enter needle String: ";
    cin >> needle;
    cout << "Index: " << strStr(haystack, needle);
    return 0;
}
// Time Complexity --> O(n * m)
// Space Complexity --> O(1)